/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszymcza <mszymcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:59:23 by mszymcza          #+#    #+#             */
/*   Updated: 2025/01/18 18:09:54 by mszymcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int lg, char l, char m, char r)
{
	int	i;

	i = 0;
	while (i < lg)
	{
		if (i == 0)
			ft_putchar(l);
		else
		{
			if (i == lg - 1)
				ft_putchar(r);
			else
				ft_putchar(m);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (j < y)
	{
		if (j == 0)
			print_line(x, 'A', 'B', 'C');
		else
		{
			if (j == y - 1)
				print_line(x, 'A', 'B', 'C');
			else
				print_line(x, 'B', ' ', 'B');
		}
		j++;
	}
}
