#include <unistd.h>


int main(int ac ,  char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if(av[1][i] == 'a')
            {
                write(1,"a\n",2);
            }
            i++;
        }
        write(1, "\n", 1);
        //return 0;
    }
    write(1,"a\n",2);
    //return 0;
    
    
}
