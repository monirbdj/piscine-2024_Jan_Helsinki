/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:02:29 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/29 15:43:04 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
}
/*#include <stdio.h>
int main()
{
	int nb = 2;
	int power = 6;
	printf("%d", ft_iterative_power(nb, power));
}*/
