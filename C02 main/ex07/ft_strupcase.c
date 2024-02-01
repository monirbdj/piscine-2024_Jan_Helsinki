/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:23:40 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/18 15:46:44 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    
    return (str);
}

int main()
{
    char str1[] = "abcd";
    

    printf("str1: %s\n", ft_strupcase(str1));

    return 0;
}

