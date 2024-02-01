/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:09:44 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/18 16:48:22 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int	new_word;

	i = 0;
	new-word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (new_word == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A' ) || (c > 'Z' && c < 'a' ) || c > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
