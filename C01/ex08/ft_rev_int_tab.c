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

/*void    ft_rev_int_tab(int *tab, int size)
{
    int rev[size];
    int i;
    int j;

    i = size;
    j = 0;

    while(i > 0)
    {
        rev[j] = tab[i - 1];
        j++;
        i--;
    }
    j = 0;
    while(j < size)
    {
        tab[j]=rev[j];
        j++;
    }    
}
int main()
{
    int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int i = 0;

    // Reverse the array
    ft_rev_int_tab(arr, size);

    // Print the reversed array
    while (i < size)
    {
        ft_putnbr(arr[i]);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);

    return 0;
}
}
*/
#include <unistd.h>

    void    ft_rev_int_tab(int *tab, int size)
    {
            int temp;
            int i;

            i = 0;

            while(i - size /2)
            {
                    temp = tab[i];
                    tab[i] = tab[size - i -1];
                    tab[size -i -1] = temp;
                    temp++;
                    i++;
            }
    }   
    int main()
    {
        int arr[] = {1 , 2 , 3 , 4 , 5};
        int size = 5;
        int i;

        ft_rev_int_tab(arr,size);

        while(i < size)
        {
            ft_putnbr(arr[i]);
            write(1, " ", 1);
            i++;
        }
        write(1, "\n", 1);
        return 0;
    }

    