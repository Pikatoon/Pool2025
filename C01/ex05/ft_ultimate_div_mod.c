#include <unistd.h>

void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        write(1,"-2147483648",1);
        return;
    }   
    if(nb < 0)
    {
        write(1,"-", 1);
        nb = -nb;
    }
    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        char c = nb % 10 + '0';
        write(1, &c, 1);
    }
}
void    ft_ultimate_div_mod(int *a, int *b)
{
    int div = *a / *b;
    int mod = *a % *b;
    *a = div;
    *b = mod;
}
int main()
{
    int a;
    int b;
   
    a = 6;
    b = 4;
    
    ft_ultimate_div_mod(&a, &b);
    write(1, "a = ", 4); 
    ft_putnbr(a);
    write(1,"\n",1);
    write(1, "b = ", 4);
    ft_putnbr(b);
    write(1,"\n",1);
}    
    
   






