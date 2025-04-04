# UART to UART with TTL to RS-485 Converters

[![K0I05](https://img.shields.io/badge/K0I05-a9a9a9?logo=data:image/svg%2bxml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIxODgiIGhlaWdodD0iMTg3Ij48cGF0aCBmaWxsPSIjNDU0QjU0IiBkPSJNMTU1LjU1NSAyMS45M2MxOS4yNzMgMTUuOTggMjkuNDcyIDM5LjM0NSAzMi4xNjggNjMuNzg5IDEuOTM3IDIyLjkxOC00LjU1MyA0Ni42Ni0xOC44NDggNjQuNzgxQTUwOS40NzggNTA5LjQ3OCAwIDAgMSAxNjUgMTU1bC0xLjQ4NCAxLjg4M2MtMTMuMTk2IDE2LjUzMS0zNS41NTUgMjcuMjE1LTU2LjMzOSAyOS45MDItMjguMzEyIDIuOC01Mi4yNTUtNC43MzctNzQuNzMyLTIxLjcxNUMxMy4xNzIgMTQ5LjA5IDIuOTczIDEyNS43MjUuMjc3IDEwMS4yODEtMS42NiA3OC4zNjMgNC44MyA1NC42MjEgMTkuMTI1IDM2LjVBNTA5LjQ3OCA1MDkuNDc4IDAgMCAxIDIzIDMybDEuNDg0LTEuODgzQzM3LjY4IDEzLjU4NiA2MC4wNCAyLjkwMiA4MC44MjMuMjE1YzI4LjMxMi0yLjggNTIuMjU1IDQuNzM3IDc0LjczMiAyMS43MTVaIi8+PHBhdGggZmlsbD0iI0ZERkRGRCIgZD0iTTExOS44NjcgNDUuMjdDMTI4LjkzMiA1Mi4yNiAxMzMuODIgNjMgMTM2IDc0Yy42MyA0Ljk3Mi44NDIgOS45NTMuOTUzIDE0Ljk2LjA0NCAxLjkxMS4xMjIgMy44MjIuMjAzIDUuNzMxLjM0IDEyLjIxLjM0IDEyLjIxLTMuMTU2IDE3LjMwOWE5NS42MDQgOTUuNjA0IDAgMCAxLTQuMTg4IDMuNjI1Yy00LjUgMy43MTctNi45NzQgNy42ODgtOS43MTcgMTIuODAzQzEwNi45NCAxNTIuNzkyIDEwNi45NCAxNTIuNzkyIDk3IDE1N2MtMy40MjMuNTkyLTUuODAxLjY4NS04Ljg3OS0xLjA3NC05LjgyNi03Ljg4LTE2LjAzNi0xOS41OS0yMS44NTgtMzAuNTEyLTIuNTM0LTQuNTc1LTUuMDA2LTcuMjEtOS40NjYtMTAuMDItMy43MTQtMi44ODItNS40NS02Ljk4Ni02Ljc5Ny0xMS4zOTQtLjU1LTQuODg5LS41NjEtOS4zMTYgMS0xNCAuMDkzLTEuNzYzLjE4Mi0zLjUyNy4yMzktNS4yOTIuNDkxLTEzLjg4NCAzLjg2Ni0yNy4wNTcgMTQuMTU2LTM3LjAyOCAxNy4yMTgtMTQuMzM2IDM1Ljg1OC0xNS4wNjYgNTQuNDcyLTIuNDFaIi8+PHBhdGggZmlsbD0iI0M2RDVFMCIgZD0iTTEwOSAzOWMxMS43MDMgNS4yNTUgMTkuMjA2IDEzLjE4NiAyNC4yOTMgMjUuMDA0IDIuODU3IDguMjQgMy40NyAxNi4zMTYgMy42NiAyNC45NTYuMDQ0IDEuOTExLjEyMiAzLjgyMi4yMDMgNS43MzEuMzQgMTIuMjEuMzQgMTIuMjEtMy4xNTYgMTcuMzA5YTk1LjYwNCA5NS42MDQgMCAwIDEtNC4xODggMy42MjVjLTQuNSAzLjcxNy02Ljk3NCA3LjY4OC05LjcxNyAxMi44MDNDMTA2LjgwNCAxNTMuMDQxIDEwNi44MDQgMTUzLjA0MSA5NyAxNTdjLTIuMzMyLjA3OC00LjY2OC4wOS03IDBsMi4xMjUtMS44NzVjNS40My01LjQ0NSA4Ljc0NC0xMi41NzcgMTEuNzU0LTE5LjU1OWEzNDkuNzc1IDM0OS43NzUgMCAwIDEgNC40OTYtOS44NzlsMS42NDgtMy41NWMyLjI0LTMuNTU1IDQuNDEtNC45OTYgNy45NzctNy4xMzcgMi4zMjMtMi42MSAyLjMyMy0yLjYxIDQtNWwtMyAxYy0yLjY4LjE0OC01LjMxOS4yMy04IC4yNWwtMi4xOTUuMDYzYy01LjI4Ny4wMzktNS4yODcuMDM5LTcuNzc4LTEuNjUzLTEuNjY2LTIuNjkyLTEuNDUzLTQuNTYtMS4wMjctNy42NiAyLjM5NS00LjM2MiA0LjkyNC04LjA0IDkuODI4LTkuNTcgMi4zNjQtLjQ2OCA0LjUxNC0uNTI4IDYuOTIyLS40OTNsMi40MjIuMDI4TDEyMSA5MmwtMS0yYTkyLjc1OCA5Mi43NTggMCAwIDEtLjM2LTQuNTg2QzExOC42IDY5LjYzMiAxMTYuNTE3IDU2LjA5NCAxMDQgNDVjLTUuOTA0LTQuNjY0LTExLjYtNi4wODgtMTktNyA3LjU5NC00LjI2NCAxNi4yMjMtMS44MSAyNCAxWiIvPjxwYXRoIGZpbGw9IiM0OTUwNTgiIGQ9Ik03NyA5MmM0LjYxMyAxLjY3MSA3LjI2IDMuOTQ1IDEwLjA2MyA3LjkzOCAxLjA3OCAzLjUyMy45NzYgNS41NDYtLjA2MyA5LjA2Mi0yLjk4NCAyLjk4NC02LjI1NiAyLjM2OC0xMC4yNSAyLjM3NWwtMi4yNzcuMDc0Yy01LjI5OC4wMjgtOC4yNTQtLjk4My0xMi40NzMtNC40NDktMi44MjYtMy41OTctMi40MTYtNy42MzQtMi0xMiA0LjUwMi00LjcyOCAxMC45OS0zLjc2IDE3LTNaIi8+PHBhdGggZmlsbD0iIzQ4NEY1NyIgZD0ibTExOCA5MS43NSAzLjEyNS0uMDc4YzMuMjU0LjM3MSA0LjU5NyAxLjAwMiA2Ljg3NSAzLjMyOC42MzkgNC4yMzEuMjkgNi40NDItMS42ODggMTAuMjUtMy40MjggNC4wNzgtNS44MjcgNS41OTgtMTEuMTk1IDYuMTQ4LTEuNDE0LjAwOC0yLjgyOCAwLTQuMjQyLS4wMjNsLTIuMTY4LjAzNWMtMi45OTgtLjAxNy01LjE1Ny0uMDMzLTcuNjcyLTEuNzU4LTEuNjgxLTIuNjg0LTEuNDYtNC41NTItMS4wMzUtNy42NTIgMi4zNzUtNC4zMjUgNC44OTQtOC4wMDkgOS43NS05LjU1OSAyLjc3Ny0uNTQ0IDUuNDItLjY0OSA4LjI1LS42OTFaIi8+PHBhdGggZmlsbD0iIzUyNTg2MCIgZD0iTTg2IDEzNGgxNmwxIDRjLTIgMi0yIDItNS4xODggMi4yNjZMOTQgMTQwLjI1bC0zLjgxMy4wMTZDODcgMTQwIDg3IDE0MCA4NSAxMzhsMS00WiIvPjwvc3ZnPg==)](https://github.com/K0I05)
[![License: MIT](https://cdn.prod.website-files.com/5e0f1144930a8bc8aace526c/65dd9eb5aaca434fac4f1c34_License-MIT-blue.svg)](/LICENSE)
[![Language](https://img.shields.io/badge/Language-C-navy.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Framework](https://img.shields.io/badge/Framework-ESP_IDF-red.svg)](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/index.html)
[![Edited with VS Code](https://badgen.net/badge/icon/VS%20Code?icon=visualstudio&label=edited%20with)](https://code.visualstudio.com/)
[![Build with PlatformIO](https://img.shields.io/badge/build%20with-PlatformIO-orange?logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPHN2ZyB3aWR0aD0iMjUwMCIgaGVpZ2h0PSIyNTAwIiB2aWV3Qm94PSIwIDAgMjU2IDI1NiIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiBwcmVzZXJ2ZUFzcGVjdFJhdGlvPSJ4TWlkWU1pZCI+PHBhdGggZD0iTTEyOCAwQzkzLjgxIDAgNjEuNjY2IDEzLjMxNCAzNy40OSAzNy40OSAxMy4zMTQgNjEuNjY2IDAgOTMuODEgMCAxMjhjMCAzNC4xOSAxMy4zMTQgNjYuMzM0IDM3LjQ5IDkwLjUxQzYxLjY2NiAyNDIuNjg2IDkzLjgxIDI1NiAxMjggMjU2YzM0LjE5IDAgNjYuMzM0LTEzLjMxNCA5MC41MS0zNy40OUMyNDIuNjg2IDE5NC4zMzQgMjU2IDE2Mi4xOSAyNTYgMTI4YzAtMzQuMTktMTMuMzE0LTY2LjMzNC0zNy40OS05MC41MUMxOTQuMzM0IDEzLjMxNCAxNjIuMTkgMCAxMjggMCIgZmlsbD0iI0ZGN0YwMCIvPjxwYXRoIGQ9Ik0yNDkuMzg2IDEyOGMwIDY3LjA0LTU0LjM0NyAxMjEuMzg2LTEyMS4zODYgMTIxLjM4NkM2MC45NiAyNDkuMzg2IDYuNjEzIDE5NS4wNCA2LjYxMyAxMjggNi42MTMgNjAuOTYgNjAuOTYgNi42MTQgMTI4IDYuNjE0YzY3LjA0IDAgMTIxLjM4NiA1NC4zNDYgMTIxLjM4NiAxMjEuMzg2IiBmaWxsPSIjRkZGIi8+PHBhdGggZD0iTTE2MC44NjkgNzQuMDYybDUuMTQ1LTE4LjUzN2M1LjI2NC0uNDcgOS4zOTItNC44ODYgOS4zOTItMTAuMjczIDAtNS43LTQuNjItMTAuMzItMTAuMzItMTAuMzJzLTEwLjMyIDQuNjItMTAuMzIgMTAuMzJjMCAzLjc1NSAyLjAxMyA3LjAzIDUuMDEgOC44MzdsLTUuMDUgMTguMTk1Yy0xNC40MzctMy42Ny0yNi42MjUtMy4zOS0yNi42MjUtMy4zOWwtMi4yNTggMS4wMXYxNDAuODcybDIuMjU4Ljc1M2MxMy42MTQgMCA3My4xNzctNDEuMTMzIDczLjMyMy04NS4yNyAwLTMxLjYyNC0yMS4wMjMtNDUuODI1LTQwLjU1NS01Mi4xOTd6TTE0Ni41MyAxNjQuOGMtMTEuNjE3LTE4LjU1Ny02LjcwNi02MS43NTEgMjMuNjQzLTY3LjkyNSA4LjMyLTEuMzMzIDE4LjUwOSA0LjEzNCAyMS41MSAxNi4yNzkgNy41ODIgMjUuNzY2LTM3LjAxNSA2MS44NDUtNDUuMTUzIDUxLjY0NnptMTguMjE2LTM5Ljc1MmE5LjM5OSA5LjM5OSAwIDAgMC05LjM5OSA5LjM5OSA5LjM5OSA5LjM5OSAwIDAgMCA5LjQgOS4zOTkgOS4zOTkgOS4zOTkgMCAwIDAgOS4zOTgtOS40IDkuMzk5IDkuMzk5IDAgMCAwLTkuMzk5LTkuMzk4em0yLjgxIDguNjcyYTIuMzc0IDIuMzc0IDAgMSAxIDAtNC43NDkgMi4zNzQgMi4zNzQgMCAwIDEgMCA0Ljc0OXoiIGZpbGw9IiNFNTcyMDAiLz48cGF0aCBkPSJNMTAxLjM3MSA3Mi43MDlsLTUuMDIzLTE4LjkwMWMyLjg3NC0xLjgzMiA0Ljc4Ni01LjA0IDQuNzg2LTguNzAxIDAtNS43LTQuNjItMTAuMzItMTAuMzItMTAuMzItNS42OTkgMC0xMC4zMTkgNC42Mi0xMC4zMTkgMTAuMzIgMCA1LjY4MiA0LjU5MiAxMC4yODkgMTAuMjY3IDEwLjMxN0w5NS44IDc0LjM3OGMtMTkuNjA5IDYuNTEtNDAuODg1IDIwLjc0Mi00MC44ODUgNTEuODguNDM2IDQ1LjAxIDU5LjU3MiA4NS4yNjcgNzMuMTg2IDg1LjI2N1Y2OC44OTJzLTEyLjI1Mi0uMDYyLTI2LjcyOSAzLjgxN3ptMTAuMzk1IDkyLjA5Yy04LjEzOCAxMC4yLTUyLjczNS0yNS44OC00NS4xNTQtNTEuNjQ1IDMuMDAyLTEyLjE0NSAxMy4xOS0xNy42MTIgMjEuNTExLTE2LjI4IDMwLjM1IDYuMTc1IDM1LjI2IDQ5LjM2OSAyMy42NDMgNjcuOTI2em0tMTguODItMzkuNDZhOS4zOTkgOS4zOTkgMCAwIDAtOS4zOTkgOS4zOTggOS4zOTkgOS4zOTkgMCAwIDAgOS40IDkuNCA5LjM5OSA5LjM5OSAwIDAgMCA5LjM5OC05LjQgOS4zOTkgOS4zOTkgMCAwIDAtOS4zOTktOS4zOTl6bS0yLjgxIDguNjcxYTIuMzc0IDIuMzc0IDAgMSAxIDAtNC43NDggMi4zNzQgMi4zNzQgMCAwIDEgMCA0Ljc0OHoiIGZpbGw9IiNGRjdGMDAiLz48L3N2Zz4=)](https://platformio.org/)

UART 2X is a debugging program utilizing two UARTs (1 and 2) to test TTL to RS-485 converter boards (XY-485) connected together over RS-485.  UART 1 is configured and programmed to transmit data and UART 2 is configured to receive data.  A basic validation can be accomplished by wiring the microcontroller's GPIO 17 (UART1_TXD) pin to GPIO 3 (UART2_RXD) pin, when UART 1 transmits data to UART 2, the received data will be displayed through the serial monitor terminal.

## Circuit Wiring

This project can be tested in two primary configurations: a basic UART loopback for initial validation and a full RS-485 setup using TTL to RS-485 converters.  The following sections detail the wiring for each configuration.

**Important Notes Before Wiring:**

* **Power Supply:** Ensure that both the ESP32-S3 and the TTL to RS-485 converter boards are powered correctly. Typically, they operate at 3.3V or 5V. Refer to the datasheets for your specific components.
* **Ground Connection:**  A common ground connection is essential for proper communication. Connect the ground pins of the ESP32-S3 and both TTL to RS-485 converter boards together.
* **RS-485 Termination:** For longer RS-485 cable runs, you may need to add termination resistors (typically 120 ohms) at each end of the RS-485 bus to prevent signal reflections. For short distances, this is often not necessary.
* **Data Direction Control:** Some RS-485 converter boards have a "DE" (Driver Enable) and "RE" (Receiver Enable) pin. These pins are used to control whether the transceiver is transmitting or receiving. For this example, we are not using these pins, and the boards are configured for automatic direction control.
* **XY-485:** The XY-485 is a TTL to RS-485 converter board.  It is used to convert the TTL signals from the ESP32-S3 to RS-485 signals.  It is also used to convert the RS-485 signals back to TTL signals for the ESP32-S3.

### 1. Basic UART Loopback (TTL Level)

This configuration allows you to test the basic UART functionality of the ESP32-S3 without the RS-485 converters. It's a good first step to ensure that the UART peripherals are working correctly.

* **Wiring:**
  * Connect GPIO 17 (UART1_TXD) to GPIO 3 (UART2_RXD).
  * Connect the ground pin of the ESP32-S3 to the ground of your power supply.
* **Purpose:** This creates a loopback where data transmitted from UART 1 is directly received by UART 2.
* **Verification:** After uploading the code, open the serial monitor. You should see the "Hello World!" message being transmitted and received, indicating that the basic UART communication is functional.

### 2. RS-485 Communication (with TTL to RS-485 Converters)

This configuration demonstrates communication between two RS-485 transceivers connected to the ESP32-S3. This is the full setup for testing RS-485 communication.

* **Components:**
  * ESP32-S3 microcontroller.
  * Two TTL to RS-485 converter boards (e.g., XY-485).
  * Connecting wires.
  * Power supply.
* **Wiring Table:**

    | Connection             | ESP32-S3 Pin | TTL to RS-485 Converter (Board 1) | TTL to RS-485 Converter (Board 2) |
    | ---------------------- | ------------ | --------------------------------- | --------------------------------- |
    | UART1 Transmit (TXD)   | GPIO 17      | TTL1_TXD                          |                                   |
    | UART1 Receive (RXD)    | GPIO 18      | TTL1_RXD                          |                                   |
    | UART2 Transmit (TXD)   | GPIO 1       |                                   | TTL2_TXD                          |
    | UART2 Receive (RXD)    | GPIO 3       |                                   | TTL2_RXD                          |
    | RS-485 A               |              | TTL1_RS485_A                      | TTL2_RS485_A                      |
    | RS-485 B               |              | TTL1_RS485_B                      | TTL2_RS485_B                      |
    | Ground                 | GND          | GND                               | GND                               |
    | Power                  | 3.3V or 5V   | VCC                               | VCC                               |

* **Wiring Steps:**
    1. **Connect ESP32-S3 to Board 1:**
        * Connect GPIO 17 (UART1_TXD) on the ESP32-S3 to the TTL1_TXD pin on the first TTL to RS-485 converter board.
        * Connect GPIO 18 (UART1_RXD) on the ESP32-S3 to the TTL1_RXD pin on the first TTL to RS-485 converter board.
    2. **Connect ESP32-S3 to Board 2:**
        * Connect GPIO 1 (UART2_TXD) on the ESP32-S3 to the TTL2_TXD pin on the second TTL to RS-485 converter board.
        * Connect GPIO 3 (UART2_RXD) on the ESP32-S3 to the TTL2_RXD pin on the second TTL to RS-485 converter board.
    3. **Connect RS-485 Boards:**
        * Connect the TTL1_RS485_A pin on the first board to the TTL2_RS485_A pin on the second board.
        * Connect the TTL1_RS485_B pin on the first board to the TTL2_RS485_B pin on the second board.
    4. **Connect Power and Ground:**
        * Connect the ground pins (GND) of the ESP32-S3 and both TTL to RS-485 converter boards together.
        * Connect the power pins (VCC) of both TTL to RS-485 converter boards to the appropriate power supply (3.3V or 5V, depending on your boards).
        * Connect the power pin (3.3V or 5V) of the ESP32-S3 to the appropriate power supply.
    5. **Verify:** Ensure all connections are secure and correct before applying power.
* **Purpose:** This setup allows data to be transmitted from UART 1 on the ESP32-S3, converted to RS-485, sent over the RS-485 bus, converted back to TTL, and received by UART 2 on the ESP32-S3.
* **Verification:** After uploading the code, open the serial monitor. You should see the "Hello World!" message being transmitted from UART 1 and received by UART 2, indicating successful RS-485 communication.

**Circuit Diagram:**

Refer to the circuit diagram below for a visual representation of the RS-485 wiring.

![Circuit](assets/circuit_image.svg)

## Program Flow

The program utilizes FreeRTOS tasks to manage the UART communication, allowing for concurrent transmit and receive operations. The main steps are:

1. **Define UART GPIO Pins:** Define the GPIO pins used for UART 1 (transmit) and UART 2 (receive). These pins are used to connect the ESP32-S3 to the TTL to RS-485 converter boards.
2. **Configure UARTs:** Initialize UART 1 and UART 2, install the necessary drivers, and set the GPIO pins. This step configures the UART peripherals for communication.
3. **Create Receive Task:** Create a FreeRTOS task (`uart2_rx_task`) to continuously monitor UART 2 for incoming data. This task is responsible for receiving data from the RS-485 bus (via the converter board) and processing it.
4. **Create Transmit Task:** Create a FreeRTOS task (`uart1_tx_task`) to periodically transmit data over UART 1. This task is responsible for sending data out over the RS-485 bus (via the converter board).

**Detailed Breakdown:**

The program's operation can be broken down into the following phases:

**A. Initialization Phase:**

1. **UART Pin Definition:** The program starts by defining the GPIO pins that will be used for UART communication. This is done using `#define` directives, as shown in the "UART Configuration" section.

    ```c
    // UART 1 - tx
    #define UART1 UART_NUM_1
    #define UART1_TXD  (GPIO_NUM_17)
    #define UART1_RXD  (GPIO_NUM_18)

    // UART 2 - rx
    #define UART2 UART_NUM_2
    #define UART2_TXD  (GPIO_NUM_1)
    #define UART2_RXD  (GPIO_NUM_3)
    ```

    * **Purpose:** These definitions map the logical UART names (UART1, UART2) to the physical GPIO pins on the ESP32-S3.
2. **UART Configuration:** The `init_uarts()` function is called to configure the UART peripherals.
    * **`uart_config_t`:** A structure is defined to hold the UART configuration parameters (baud rate, data bits, parity, stop bits, flow control, clock source).
    * **`uart_driver_install()`:** This function installs the UART driver for each UART, allocating the necessary resources (buffers, etc.).
    * **`uart_param_config()`:** This function applies the configuration parameters defined in the `uart_config_t` structure to each UART.
    * **`uart_set_pin()`:** This function assigns the previously defined GPIO pins to the UART peripherals.

    ```c
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
    ```

    * **Purpose:** This step sets up the UART peripherals to be ready for communication.
3. **Task Creation:** The `xTaskCreatePinnedToCore()` function is used to create the receive and transmit tasks.

    ```c
    xTaskCreatePinnedToCore(uart2_rx_task, "uart2_rx_task", 
        1024 * 3, NULL, configMAX_PRIORITIES - 1, NULL, APP_CPU_NUM);
    xTaskCreatePinnedToCore(uart1_tx_task, "uart1_tx_task", 
        1024 * 3, NULL, configMAX_PRIORITIES - 2, NULL, APP_CPU_NUM);
    ```

    * **`xTaskCreatePinnedToCore()`:** This FreeRTOS function creates a new task and pins it to a specific CPU core.
    * **`uart2_rx_task` and `uart1_tx_task`:** These are the functions that implement the receive and transmit tasks, respectively.
    * **`"uart2_rx_task"` and `"uart1_tx_task"`:** These are the names assigned to the tasks for debugging purposes.
    * **`1024 * 3`:** This is the stack size allocated to each task (3KB).
    * **`NULL`:** This is the task parameter, which is not used in this example.
    * **`configMAX_PRIORITIES - 1` and `configMAX_PRIORITIES - 2`:** These are the task priorities. Higher numbers indicate higher priority. The receive task has a higher priority than the transmit task.
    * **`NULL`:** This is the task handle, which is not used in this example.
    * **`APP_CPU_NUM`:** This macro specifies that the tasks should be pinned to the application CPU core.
    * **Purpose:** This step sets up the concurrent tasks that will handle the UART communication.

**B. Operational Phase (Concurrent Tasks):**

1. **Receive Task (`uart2_rx_task`):**
    * **Loop:** The task enters an infinite loop (`while (1)`).
    * **Read UART:** `uart_read_bytes()` is called to read data from the UART 2 receive buffer.
    * **Check for Data:** If `rx_bytes > 0`, data has been received.
    * **Process Data:** The received data is null-terminated (`data[rx_bytes] = 0;`) to make it a valid C string.
    * **Log Data:** `ESP_LOGI()` and `ESP_LOG_BUFFER_HEXDUMP()` are used to print the received data to the serial monitor.
    * **Flush Buffer:** `uart_flush(UART2)` is used to clear the UART2 buffer.
    * **Repeat:** The loop continues, waiting for more data.
    * **Cleanup:** `free(data)` is used to release the memory allocated for the data buffer.
    * **Delete Task:** `vTaskDelete(NULL)` is used to delete the task.

    ```c
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
    ```

    * **Purpose:** This task continuously monitors UART 2 for incoming data and processes it.
2. **Transmit Task (`uart1_tx_task`):**
    * **Loop:** The task enters an infinite loop (`while (1)`).
    * **Transmit Data:** `uart1_tx_data()` is called to transmit the "Hello World!" message over UART 1.
    * **Delay:** `vTaskDelay()` is used to pause the task for 5 seconds (5000 milliseconds).
    * **Repeat:** The loop continues, transmitting the message every 5 seconds.
    * **Delete Task:** `vTaskDelete(NULL)` is used to delete the task.

```c
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
```

* **Purpose:** This task periodically transmits data over UART 1.

**C. Task Management:**

* **FreeRTOS:** The use of FreeRTOS allows the receive and transmit tasks to run concurrently. The FreeRTOS scheduler manages the execution of these tasks, switching between them as needed.
* **Task Priorities:** The receive task has a higher priority than the transmit task. This ensures that incoming data is processed promptly.
* **Task Deletion:** The `vTaskDelete(NULL)` function is used to delete the task when it is no longer needed.

**Diagram:**

A simplified diagram of the program flow is shown below:

+-------------------+ +-------------------+ +-------------------+ | Initialization |------>| Concurrent Tasks |------>| Task Management | +-------------------+ +-------------------+ +-------------------+ | - Define UART | | - Receive Task | | - FreeRTOS | | Pins | | (UART 2) | | Scheduler | | - Configure UARTs | | - Transmit Task | | - Task Priorities | | - Create Tasks | | (UART 1) | | - Task Deletion | +-------------------+ +-------------------+ +-------------------+

## Next Steps

RS-485 supports inexpensive local networks and multidrop communications links.  It is generally accepted that RS-485 can be used with data rates up to 10 Mbit/s or, at lower speeds, distances up to 1,200 m (4,000 ft).  RS-485 with MODBUS is widely used in instrumentation applications and would be a suggested `next step` to explore.  If you would like to explore further, feel free to review the [MODBUS RTU example](<https://github.com/K0I05/KINCONY-S3_RTU>).

Copyright (c) 2025 Eric Gionet (<gionet.c.eric@gmail.com>)
