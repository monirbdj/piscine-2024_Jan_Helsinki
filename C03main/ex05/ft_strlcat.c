/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:59:35 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/25 16:02:42 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	tlen;

	dlen = 0;
	slen = 0;
	tlen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[tlen] != '\0')
		tlen++;
	if (size <= dlen)
		tlen += size;
	else
		tlen += dlen;
	while (src[slen] != '\0' && (dlen + 1) < size)
	{
		dest[dlen] = src[slen];
		dlen++;
		slen++;
	}
	dest[dlen] = '\0';
	return (tlen);
}
#include <stdio.h>

int main (void)
{
    char src[] = "hive helsinki";
    char dest [] = "hello ";
    printf("%i\n", ft_strlcat(dest, src, 20));
    printf("%s\n", dest);
    
}
