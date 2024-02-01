#include <unistd.h>
void	wr_str(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
int main()
{
	wr_str("abcde");
}
