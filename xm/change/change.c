#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}
int main()
{
	int		i;
	int		x;
	char	c;
	

	i = 0;
	x = 0;
	c = 'a';
	while ( c <= 'z')
	{
		if (x == 4)
		{
			putchar('4');
			x = 0;
		}
		if (i == 7)
		{
			putchar('7');
			i = 0;
		}
		else
		{
			putchar(c);
			c++;
			x++;
			i++;
		}
	}
	return (0);
}
			
