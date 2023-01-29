#include "lib/include.h"


int main(void)
{                           //15 14  13  12  11  10  9   8   7    6   5   4   3   2   1   0 
    uint16_t count = 16383; //0   0   1   1   1   1   1   1   1   1   1   1   1   1   1   1
    Configurar_PLL();  //Confiuracion de velocidad de reloj 50MHZ
    Configurar_GPIO();
    Configurar_SSI2();
    while(1)
    {
        SPI_write((uint16_t)count); 
        SysTick_1ms(50000);
    }

}
