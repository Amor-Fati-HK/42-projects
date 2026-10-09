#include <unistd.h>


void ft_print_alphabet(void){
    for(int i=97; i<123;i++){
        char c=(char)i;
        write(1,&c,1);
    }
}