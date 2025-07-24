#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}
/*
int main()
{
    int x;

    int y;

    x = 9;
    y = 4;

    ft_swap(&x,&y);

    char c = x + '0';
    char d = y + '0';
    write(1,&c,1);
    write(1,&d,1);
    write(1, "\n",1);
}*/