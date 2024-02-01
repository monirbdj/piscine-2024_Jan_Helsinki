#include <unistd.h>
void	putchar(char c)
{
	write(1, &c, 1);
}
char	putnbr(int n)
{
	char c;

	if (n >= 10)
	{
		c = (n % 10 + '0');
		putnbr(n / 10);
	}
	else
		c = n + '0';
	putchar('-');
	putchar(c);
	return(c);
}
int main()
{
	int n;
	
	n = 0;
	while (n <= 100)
	{
		putnbr(n);
		putchar('\n');
		n++;
	}
	return 0;
}
