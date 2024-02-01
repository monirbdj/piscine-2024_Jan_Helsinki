/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:48:28 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/13 13:07:11 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
    *nbr = 42;
}


int    main()
{
    int    nbr = 0;
    
   printf("Original nbr: %d\n", nbr);

    ft_ft(&nbr);
    printf("updated nbr: %d", nbr);
}
