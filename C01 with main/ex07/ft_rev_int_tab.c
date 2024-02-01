/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhossain <mhossain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:27:27 by mhossain          #+#    #+#             */
/*   Updated: 2024/01/16 17:49:05 by mhossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;

	i = 0;
	while (i < size / 2)
	{
		end = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i - 1] = end;
		i++;
	}
}
int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
        
    ft_rev_int_tab(arr, size);
    
    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
}
