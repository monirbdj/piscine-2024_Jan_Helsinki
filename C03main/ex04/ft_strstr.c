/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:37:11 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/24 16:37:05 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find [j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
    char s[] = "hello hivers! I am here from 08 january";
    char f[] = "january";
    char e[] = "empty";
    
    printf("%s", ft_strstr(s, f));
	printf ("%p", ft_strstr(s, f));
	printf("\n%s", ft_strstr(s, e));
}

