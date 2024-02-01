/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:47:42 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/17 20:54:06 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_uppercase(char *str)
{
    while (*str >= 'A' && *str <= 'Z')
    {
        str++;
    }
    if (*str == '\0')
        return (1);
    else
        return (0);
}
int main()
{
    char str1[] = "ABCD";
    char str2[] = "A1cf";
    char str3[] = "";
    
    printf("str1: %d\n", ft_str_is_uppercase(str1));
    printf("str2: %d\n", ft_str_is_uppercase(str2));
    printf("str3: %d\n", ft_str_is_uppercase(str3));
}
