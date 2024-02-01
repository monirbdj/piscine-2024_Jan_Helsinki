/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:55:35 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/14 15:55:39 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void    ft_swap(int *a, int *b)
{
    int    n;

    n = *a;
    *a = *b;
    *b = n;
}

int    main(void)
{
    int num1 = 1;
    int num2 = 2;

    ft_swap(&num1, &num2);
    printf("Spdnum1: %d\n" "Spdnum2: %d", num1, num2);
    return (0);
}
