#include <stdio.h>
#include "DIO.h"
#include "STD_types.h"
#include "Bit_utils.h"
#include "PORT_Config.h"
#include "PORT.h"

#define PORT_A   0
#define PIN0	0
#define OUTPUT	1

int main (){
DIO_enumSetPort(PORT_A,OUTPUT);
DIO_enumSetPin(PORT_A,PIN0,OUTPUT);
return 0;
}

