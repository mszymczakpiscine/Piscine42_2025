/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszymcza <mszymcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:44:33 by mszymcza          #+#    #+#             */
/*   Updated: 2025/01/20 15:36:42 by mszymcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int    main(void)
{
    int is_alpha;
    char a[] = "fqfdazeaezz45";
    is_alpha = ft_str_is_alpha(a);
    printf("%d\n", is_alpha);
}
*/
