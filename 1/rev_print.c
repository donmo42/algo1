#include <unistd.h>

int main(int ac, char *av[])
{
    int i  = 0; 
    if ( ac == 2)
    {
        while(av[1][i])
            i++;
        // pas oublié de diminuer le i directement
        while(i -- )
        { 
            write(1, &av[1][i],1);
         
        }
    }
}