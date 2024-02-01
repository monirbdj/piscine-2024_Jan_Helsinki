/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 23:18:07 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/25 15:49:03 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

int main()
{
    char src[] = "abcdeg";
    char dest1[] = "1234";
    printf("%s", ft_strcat(dest1, src));
    
    char src1[] = "adc";
    char dest2[] = "123\100";
    printf("\n%s", ft_strcat(dest2, src1));
 
}
