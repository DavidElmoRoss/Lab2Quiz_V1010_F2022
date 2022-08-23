/*
Use the RUN OPTION to update the FLASH and RUN the code on your FRDM-K64

*/


#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
    printf("\e[2J");
    fflush(stdout);
    printf("\e[1;31;44m");
    printf("\f");
    fflush(stdout);
    printf("\e[12;35H");
    printf("Hello World");
    fflush(stdout);
    for(;;);
}

