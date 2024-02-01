/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:54:44 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/17 18:55:48 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_numeric(char *str)
{
    while (*str >= '0' && *str <= '9')
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
    char str1[] = "1234";
    char str2[] = "a1cf";
    char str3[] = "";
    
    printf("str1: %d\n", ft_str_is_numeric(str1));
    printf("str2: %d\n", ft_str_is_numeric(str2));
    printf("str3: %d\n", ft_str_is_numeric(str3));
}
