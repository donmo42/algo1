#include <unistd.h> // write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void first_word(char *str)
{
    int i ;
    i = 0 ;


    while(str[i] == ' ' || str[i] == '\t')
        i++;
    while(str[i])
    {
        if (( str[i] == ' ') || (str[i] == '\t'))
        { 
                 break;
        }
       
        ft_putchar(str[i]);
            i ++;
    }

}
int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}