/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2025 Eric Gionet (gionet.c.eric@gmail.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
/**
 * @file main.c
 * 
 * Copyright (c) 2025 Eric Gionet (gionet.c.eric@gmail.com)
 *
 * MIT Licensed as described in the file LICENSE
 * 
 * @brief UART 2X is a debugging program utilizing two UARTS (1 and 2).  UART 1 is used to transmit
 * data and UART 2 is used to receive data.  A basic validation can be accomplished by wiring MCU
 * GPIO 17 (UART1_TXD) to GPIO 3 (UART2_RXD), when UART 1 to transmit data to UART 2, the received 
 * data will be displayed. 
 * 
 * Basic validation wiring to MCU:
 * -UART1_TXD -> UART2_RXD
 * 
 * This program was written to test TTL to RS-485 boards (XY-485) connected together over RS-485.
 * 
 * TTL to RS-485 (board 1) wiring to MCU:
 * -UART1_TXD -> TTL1_TXD
 * -UART1_RXD -> TTL1_RXD
 * 
 * TTL to RS-485 (board 2) wiring to MCU:
 * -UART2_TXD -> TTL2_TXD
 * -UART2_RXD -> TTL2_RXD
 * 
 * RS-485 (board 1) to RS-485 (board 2):
 * -TTL1_RS485_A -> TTL2_RS485_A
 * -TTL1_RS485_B -> TTL2_RS485_B
 * 
 * C:\Users\lavco\.platformio\penv\Scripts\platformio.exe run -t menuconfig
 * 
 */
#include <stdio.h>
#include <string.h>
#include <esp_system.h>
#include <esp_log.h>
#include <nvs.h>
#include <nvs_flash.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/uart.h>
#include <driver/gpio.h>

// UART 1 - tx
#define UART1 UART_NUM_1
#define UART1_TXD  (GPIO_NUM_17)
#define UART1_RXD  (GPIO_NUM_18)

// UART 2 - rx
#define UART2 UART_NUM_2
#define UART2_TXD  (GPIO_NUM_1)
#define UART2_RXD  (GPIO_NUM_3)

#define RX_BUF_SIZE (1024)

static const char *TAG = "UART 2X [APP]";

/**
 * @brief Initializes UART 1 and 2.
 */
static inline void init_uarts( void ) {
    // configuration for UART 1 and 2
    const uart_config_t uart_config = {
        .baud_rate  = 115200,
        .data_bits  = UART_DATA_8_BITS,
        .parity     = UART_PARITY_DISABLE,
        .stop_bits  = UART_STOP_BITS_1,
        .flow_ctrl  = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_DEFAULT,
    };

    // UART1 - tx
    uart_driver_install(UART1, RX_BUF_SIZE * 2, 0, 0, NULL, 0);
    uart_param_config(UART1, &uart_config);
    uart_set_pin(UART1, UART1_TXD, UART1_RXD, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);

    // UART2 - rx
    uart_driver_install(UART2, RX_BUF_SIZE * 2, 0, 0, NULL, 0);
    uart_param_config(UART2, &uart_config);
    uart_set_pin(UART2, UART2_TXD, UART2_RXD, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
}

/**
 * @brief Transmits data from UART 1.
 * 
 * @param log_name Log name for ESP logging.
 * @param data Data to transmit from UART 1.
 * @return int Numbers of bytes transmitted from UART 1.
 */
static inline int uart1_tx_data(const char* log_name, const char* data) {
    const int len = strlen(data);
    const int tx_bytes = uart_write_bytes(UART_NUM_1, data, len);
    ESP_LOGI(log_name, "Wrote %d bytes", tx_bytes);
    return tx_bytes;
}

static void uart1_tx_task(void *pv_parameters) {
    static const char *TX_TASK_TAG = "UART1_TX_TASK";
    esp_log_level_set(TX_TASK_TAG, ESP_LOG_INFO);
    while (1) {
        uart1_tx_data(TX_TASK_TAG, "Hello World!");
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}

static void uart2_rx_task(void *pv_parameters) {
    static const char *RX_TASK_TAG = "UART2_RX_TASK";
    esp_log_level_set(RX_TASK_TAG, ESP_LOG_INFO);
    uint8_t* data = (uint8_t*)malloc(RX_BUF_SIZE + 1);
    while (1) {
        const int rx_bytes = uart_read_bytes(UART2, data, RX_BUF_SIZE, 1000 / portTICK_PERIOD_MS);
        if (rx_bytes > 0) {
            data[rx_bytes] = 0;
            ESP_LOGI(RX_TASK_TAG, "Read %d bytes: '%s'", rx_bytes, data);
            ESP_LOG_BUFFER_HEXDUMP(RX_TASK_TAG, data, rx_bytes, ESP_LOG_INFO);
            uart_flush(UART2);
        }
    }
    free(data);
    vTaskDelete(NULL);
}


void app_main( void ) {
    ESP_LOGI(TAG, "Startup..");
    ESP_LOGI(TAG, "Free memory: %lu bytes", esp_get_free_heap_size());
    ESP_LOGI(TAG, "IDF version: %s", esp_get_idf_version());

    esp_log_level_set("*", ESP_LOG_INFO);
    esp_log_level_set(TAG, ESP_LOG_VERBOSE);

    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
      ESP_ERROR_CHECK( nvs_flash_erase() );
      ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK( ret );

    // initialize UART 1 and 2
    init_uarts();
    //
    // create tasks - start the rx task before the tx task
    xTaskCreatePinnedToCore(uart2_rx_task, "uart2_rx_task", 1024 * 3, NULL, configMAX_PRIORITIES - 1, NULL, APP_CPU_NUM);
    xTaskCreatePinnedToCore(uart1_tx_task, "uart1_tx_task", 1024 * 3, NULL, configMAX_PRIORITIES - 2, NULL, APP_CPU_NUM);
}