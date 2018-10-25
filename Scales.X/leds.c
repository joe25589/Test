// leds 
#include <stdio.h>
#include <stdlib.h>
#include <p18f452.h>
#include <spi.h>
#include "ConfigRegs.h"
#include <delays.h>

short data = 0b0000111100001111;
char  dataa = 0xAA;

int main() {
    
    TRISB = 0x00;
    TRISC = 0x00;
    OpenSPI(SPI_FOSC_4, MODE_10, SMPEND);

    PORTBbits.RB5 = 1;  //slave select first chip
    PORTBbits.RB5 = 0;   
    PORTBbits.RB5 = 1;

    WriteSPI(dataa);
    Delay100TCYx(0);
    
    PORTBbits.RB5 = 1; //hold high to deselect? 
       
        
    PORTBbits.RB4 = 1;  //slave select second chip
    PORTBbits.RB4 = 0; 
    PORTBbits.RB4 = 1;

    WriteSPI(dataa);
    Delay100TCYx(0);
    
    PORTBbits.RB5 = 1;  //hold high to deselect? Gl!
        
    while(1);
    
}
    
    
    
    
  


