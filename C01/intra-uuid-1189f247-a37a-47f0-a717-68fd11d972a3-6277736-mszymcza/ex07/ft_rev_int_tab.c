/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszymcza <mszymcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:08:09 by mszymcza          #+#    #+#             */
/*   Updated: 2025/01/16 18:48:19 by mszymcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	i;

	i = 0;
	ft_rev_int_tab(tab, 9);
	while (i < 9)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/
