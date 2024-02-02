/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:05:44 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/25 22:32:20 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_occ_z(char *str)
{
	int	i;
	int j;
	int x;
	char y;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
		{
			j++;
		}
		i++;
	}
	y = j + '0';
	x = 1;
	while (j >= 10)
	{
		j = j / 10;
		x++;
	}
	write(1, &y, x);
}

int main()
{
	char str[] = "azzzapizza";

	ft_occ_z(str);
	write(1, "\n", 1);
	return (0);
}
