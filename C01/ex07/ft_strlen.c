#include <unistd.h>

void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        write(1, "2147483648", 1);
        return;
    }
    if(nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        char c;
        c = nb % 10 + '0';
        write(1, &c, 1);
    }
}



int ft_strlen(char *str)

{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}    

int main()
{
    int len;
    char str[] = "hello world";
    
    len = ft_strlen(str);
    ft_putnbr(len);
    write(1, "\n", 1);
    return 0;
}
    





