/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:54:44 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/17 17:56:31 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_alpha(char *str)
{
    while ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
    char str1[] = "abcd";
    char str2[] = "a1cf";
    char str3[] = "";
    
    printf("str1: %d\n", ft_str_is_alpha(str1));
    printf("str2: %d\n", ft_str_is_alpha(str2));
    printf("str3: %d\n", ft_str_is_alpha(str3));
}
