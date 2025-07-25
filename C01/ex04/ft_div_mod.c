#include <unistd.h> 
void ft_putnbr(int nb)
{


    if(nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if(nb < 0)
    {
        write(1,"-",1);
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

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main()
{
    int a;
    int b;

    a = 5;
    b = 5;
    int div;
    int mod;
    
    ft_div_mod(a, b ,&div, &mod);

    write(1, "div = ", 6);
    ft_putnbr(div);
    write(1, "\nmod = ", 7);
    ft_putnbr(mod);
    write(1, "\n", 1);


}    


