/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszymcza <mszymcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:14:14 by mszymcza          #+#    #+#             */
/*   Updated: 2025/01/16 16:59:33 by mszymcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	a;
	int	*nbr;

	a = 0;
	nbr = &a;
	ft_ft(nbr);
	printf("%d", a);
	return (0);
}*/
