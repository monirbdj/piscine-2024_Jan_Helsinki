int	ft_strln(char *str)
{
	int ln;
	
	ln = 0;
	while (str[ln])
		ln++;
	return (ln);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_strln("abmmmmmmmmmmmmmmmmmmmnnnnnnnnnnnbbbhhhhhcde"));
}
