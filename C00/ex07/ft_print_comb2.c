#include <unistd.h>

void ft_print_comb2(void)
{
    int a;
    int b;
    
    while (a <= 98)
    {
        b = a + 1;

            while (b <= 99)
            {
                char c;
                c = a / 10 + 48;
                write(1, &c, 1);
                c = a % 10 + 48;
                write(1, &c, 1);
                
                write(1 , " ", 1);
                
                c = b / 10 +  48;
                write(1 , &c, 1);
                c = b % 10 +  48;
                write(1 , &c, 1);
                if(a != 98 )
                write(1 , ", ", 2);

                b++;    
            }
            a++;
    }
    
}
int main ()
{
    ft_print_comb2();
}