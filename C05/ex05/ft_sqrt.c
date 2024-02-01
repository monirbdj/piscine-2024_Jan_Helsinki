/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:42:30 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/29 21:56:02 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(2147395600));
}*/
