/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:49:36 by liulm             #+#    #+#             */
/*   Updated: 2024/07/21 11:26:20 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// ---------------------------------------

#include <stdio.h>

int	main(void)
{
	char	strright[] = "SALUT";
	char	strempty[] = "";
	char	strwrong[] = "SALuT";
	printf("%d\n", ft_str_is_uppercase(strright));
	printf("%d\n", ft_str_is_uppercase(strempty));
	printf("%d", ft_str_is_uppercase(strwrong));
	return (0);
}
