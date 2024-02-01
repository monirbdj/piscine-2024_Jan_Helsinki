/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 23:56:04 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/15 23:56:11 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_strlen(char *str)
{
    int    len;

    len = 0;
    
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return (len);
}
int    main(void)
{
    char *str;
    
    str = "hive";
    printf("%d", ft_strlen(str));
    return (0);
}
