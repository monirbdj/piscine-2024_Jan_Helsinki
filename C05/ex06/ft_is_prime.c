/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:14:31 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/29 23:49:25 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if ((nb % i == 0))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(10));
}*/
