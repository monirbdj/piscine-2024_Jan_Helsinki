/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:38:17 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/24 20:38:51 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
    else
	ft_putchar(nb % 10 + '0');
}
/*int main()
{
    ft_putnbr(42);
    ft_putchar('\n');
}*/
