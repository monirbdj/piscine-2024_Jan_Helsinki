/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:35:42 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/25 23:20:32 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_occ_z(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		if ( *str == 'z')
			count++;
		str++;
	}
	return (count);

}
#include <stdio.h>

int main (void)
{
	char *str = "pizzamizza";
	printf("%d", ft_occ_z(str));
	return 0;
}

