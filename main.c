/*
 * File:   main.c
 * Author: Berni
 *
 * Created on 4 May, 2023, 12:59 PM
 */


#include <xc.h>
#include "config.h"

void initSysPins(void); 

void usrTask_Disp7Seg(void);

void main(void)
{
    initSysPins();
    while(1){
     usrTask_Disp7Seg();   
    }
}

void initSysPins(void)
{
    ANSELA=0b00000000;
    ANSELB=0b00000000;
    ANSELC=0b00000000;
    TRISA=0b11001111;
    TRISB=0b11111111;
    TRISC=0b00000000;
}