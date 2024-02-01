/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:09:36 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/25 15:53:10 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int main()
{
    char src[] = "1234";
    char dest1[] = "1234";
    printf("%s", ft_strncat(dest1, src, 4));
    
    char src1[] = "abnnnc";
    char dest2[] = "c ";
    printf("\n%s", ft_strncat(dest2, src1, 2));
 
}
