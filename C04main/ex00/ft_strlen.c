/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:54:01 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/23 22:25:56 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
#include <stdio.h>
int main()
{
	char s[] = "acbd";
	printf("%d", ft_strlen(s));
	printf("%d", ft_strlen("hello"));
}
