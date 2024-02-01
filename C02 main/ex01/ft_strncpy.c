/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:10:50 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/17 14:11:00 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
char src[] = "Hello! hivers!!";
char dest1[30];
char dest2[30];

unsigned int n = 5;

ft_strncpy(dest1, src, n);
printf("copied strn: %s\n", dest1);

strncpy(dest2, src, n);
printf("%s\n", dest2);
return 0;
}
