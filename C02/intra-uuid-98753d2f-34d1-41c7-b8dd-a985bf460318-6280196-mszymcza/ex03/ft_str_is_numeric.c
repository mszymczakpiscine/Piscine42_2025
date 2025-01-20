/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszymcza <mszymcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:38:20 by mszymcza          #+#    #+#             */
/*   Updated: 2025/01/20 09:51:19 by mszymcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(48 <= str[i] && str[i] <= 58))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int    main(void)
{
    int is_numeric;
    char a[] = "abc";
    is_numeric = ft_str_is_numeric(a);
    printf("%d\n", is_numeric);
}
*/
