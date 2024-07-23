/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:44:29 by liulm             #+#    #+#             */
/*   Updated: 2024/07/24 00:37:37 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] && str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
	while (str[i])
	{
		if (((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A'
				&& str[i] <= 'Z'))
				&& (str[i - 1] < '0'
				|| (str[i - 1] > '9'
				&& str[i - 1] < 'A')
				|| (str[i - 1] > 'Z'
				&& str[i - 1] < 'a')
				|| str[i - 1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] > 'A' && str[i] < 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

// ---------------------------------------

#include <stdio.h>

int	main()
{
	char	str[] = "salut, comMMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
}


