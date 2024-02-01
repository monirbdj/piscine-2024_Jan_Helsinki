/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:43:03 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/17 12:52:46 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int    i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
char src[] = "Hello! hivers!!";
char dest[30];

ft_strcpy(dest, src);
printf("copied strn: %s\n", dest);

}
