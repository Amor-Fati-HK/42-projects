// File : f_putchar.c
// Author: HK
// Function that displays the character passed as a parametre

#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}
