/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:07:11 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/17 21:18:48 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str >= 32 && *str <= 126)
	{
		str++;
	}
	if (*str == '\0')
		return (1);
	else
		return (0);
}
