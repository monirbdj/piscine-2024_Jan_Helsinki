#include <unistd.h>
void	putchar(char c)
{
	write(1, &c, 1);
}
char putnbr(int nbr)
{
	//int		n;
	char	c;

	//n = nbr;
	if (nbr >= 10)
	{
		c = (nbr % 10 + '0');
		putnbr(nbr / 10);
	}
	else
		c = nbr + '0';
	putchar(c);
	return(c);
}
int main()
{
	int	n;

	n = 10;
	while (n <= 100)
	{
		putnbr(n);
		putchar('\n');
		n++;
	}
	return 0;
}
