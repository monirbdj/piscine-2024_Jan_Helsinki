/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:08:29 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/18 15:53:49 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    
    return (str);
}

int main()
{
    char str1[] = "ABCD";
    char str2[] = "adGh1";
    

    printf("str1: %s\n", ft_strlowcase(str1));
     printf("str1: %s\n", ft_strlowcase(str2));

    return 0;
}
