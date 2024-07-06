/*
 * This is the header file containing the driver function declarations for
 * LPC2148's UART written by HARSHEL MALAWADE
 */


/**
 * @brief Configures the baud rate of the UART.
 *
 * @param baud : the baud rate of the UART data to be transmitted
 * valid values: 50 ...128000
 * @param clock: the input clock frequency in MHz is from the crystal clock. 
 * valid values: 1.8432MHz, 3.072MHz, 18.432MHz
 *
 * @return none
 */
void configure_baudrate (unsigned int baud, float clock);

/**
 * @brief This configures the data width/length of UART. This is usually 5 to 8 bits long (if parity bit is included) and 5 to 9 bits (if parity bit is excluded/disabled).
 *
 * @param width: length/width of the data 
 * valid values: 0x00, 0x01, 0x10, 0x11 (5-bit, 6-bit, 7-bit, 8-bit respectively)
 *
 * @return none
 */
void configure_data_width (unsigned char inp_width);

/**
 * @brief This configures the Stop Bit(s) of the UART. By defualt the stop bit is usually 1-bit (If the stop_bit_enable is set to 0, then regardless of the word length the stop_bit is configured to 1).  If the data-width is 5-bit then 1.5 stop bits is generated by default, If the data-width is 6, 7, 8 - bits then 2 stop bits is generated.   
 *
 * @param StopBit: This basically signals the end of Transmission of the data.
 * valid values: 0 or 1.
 *
 * @return none
 */
void configure_stop_bit (unsigned char stop_bit_enable);

/**
 * @brief Configures the parity of the UART. It basically describes the evenness or oddness of the number. If there is no parity, then the data length can be set to 5 - 9 bits.
 * 
 *
 * @param parity_select: the parity mode of the UART transmission. 
 * @param parity_enable: the parity is enabled or disabled. 
 * valid values: 0 (Even) or 1 (Odd) or 2 (No parity)
 *
 * @return none
 */
void configure_parity (unsigned char parity_select);

/**
 * @brief Transmits the data over the UART.
 *
 * @param transmit: the data to be transmitted 
 * valid values: any 8-bit value/character.
 *
 * @return none
 */
void transmit_data (unsigned char transmit);

/**
 * @brief Receives the data over the UART.
 *
 * @param receive: the data that'll be received.
 * valid values: any 8-bit value/character.
 *
 * @return data
 */
char receive_data ();

