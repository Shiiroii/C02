/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:01:07 by liulm             #+#    #+#             */
/*   Updated: 2024/07/21 12:10:21 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

// ---------------------------------------

#include <stdio.h>

int	main(void)
{
	char	strright[] = "Salut";
	char	strempty[] = "";
	char	strwrong[] = "S4 lu t";
	printf("%d\n", ft_str_is_alpha(strright));
	printf("%d\n", ft_str_is_alpha(strempty));
	printf("%d", ft_str_is_alpha(strwrong));
	return (0);
}
