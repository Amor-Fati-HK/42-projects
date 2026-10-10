#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char    c;

    c = 'z';
    while (c >= 97)
    {
        write(1, &c, 1);
        c--;
    }
}