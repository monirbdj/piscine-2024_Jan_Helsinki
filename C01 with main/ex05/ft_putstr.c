++/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 22:38:24 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/15 22:44:01 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    
    while (*str != '\0')
        
        write(1, &(*str++), 1);
}
int main(void)
{
    
    char exampleString[] = "Hello! hivers!";
    
    ft_putstr(exampleString);

    return 0;
}
