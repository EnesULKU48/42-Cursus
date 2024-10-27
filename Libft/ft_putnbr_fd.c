#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    long    num;

    num = n;

    if(num < 0)
    {
        ft_putchar_fd('-', fd);
        num *= -1;
    }
    if(num < 10)
        ft_putchar_fd(num + 48, fd);
    else
    {
        ft_putnbr_fd(num / 10, fd);
        ft_putnbr_fd(num % 10, fd);
    }

}