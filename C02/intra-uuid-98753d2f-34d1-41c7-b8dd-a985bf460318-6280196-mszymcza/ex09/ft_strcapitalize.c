/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszymcza <mszymcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:55:07 by mszymcza          #+#    #+#             */
/*   Updated: 2025/01/20 12:34:02 by mszymcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		after;
	char	c;

	while (*(str + i != '\0'))
	{
		c = *(str + i);
		if (after == 1 && c >= 97 && c <= 122)
			str[i] -= 32;
		else if (after == 0 && c >= 65 && c <= 90)
			str[i] += 32;
		if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || (c > 122))
			after = 1;
		else
			after = 0;
		i++;
	}
	return (str);
}
