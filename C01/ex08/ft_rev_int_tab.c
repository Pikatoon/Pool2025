#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
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
    
    

}
