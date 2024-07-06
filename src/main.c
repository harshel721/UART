#include<stdio.h>
#include "/home/harshelm/Desktop/gitfiles/UART/include/uart.h"

int main(){
	configure_baudrate(9600, 1.8432); //configure_baud_rate(baud rate, clock in MHz);
	configure_data_width(0x01); //I've set it to 6-bit word/data length
	configure_stop_bit(1); /*I've enabled the Stop-Bit and since the word length is 6, then the stopBit is set to 2*/
	configure_parity(1);  
	transmit_data('A');
	char data_received = receive_data();
}
