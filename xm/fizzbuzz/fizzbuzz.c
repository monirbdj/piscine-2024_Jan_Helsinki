/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:00:59 by mhossain          #+#    #+#             */
/*   Updated: 2024/02/01 20:26:34 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_putnbr(int nbr)
{
	int	n;
	char c;

	n = nbr;
	if (nbr >= 10)
	{
		c = (n % 10 + '0');
		ft_putnbr(n / 10);
	}
	else
		c = n + '0';
	ft_putchar(c);
	return (c);
}

int	main()
{
	int	nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
			ft_putchar('\n');
		}
		else if (nbr % 3 == 0)
		{
			write(1, "fizz", 4);
			ft_putchar('\n');
		}
		else if (nbr % 5 == 0)
		{
			write(1, "buzz", 4);
			ft_putchar('\n');
		}
		else
		{
			ft_putnbr(nbr);
			ft_putchar('\n');
		}
		nbr++;
	}
	return (0);
}
