/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:44:29 by liulm             #+#    #+#             */
/*   Updated: 2024/07/22 12:59:47 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			str[i + 1] += 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if (str[i] <= 47 || str[i] >= 58 && str[i] <= 40
				|| str[i] >= 91 && str[i] <= 96
				|| str[i] >= 123 && str[i] <= 126)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

// ---------------------------------------

#include <stdio.h>

int	main()
{
	char	str[] = "salut, coMMent tU vas ? 42mots quARAnte-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
}


