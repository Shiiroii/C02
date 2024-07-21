/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:47:45 by liulm             #+#    #+#             */
/*   Updated: 2024/07/21 11:27:18 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

// ---------------------------------------

#include <stdio.h>

int	main(void)
{
	char	strright[] = "salut";
	char	strempty[] = "";
	char	strwrong[] = "salUt";
	printf("%d\n", ft_str_is_lowercase(strright));
	printf("%d\n", ft_str_is_lowercase(strempty));
	printf("%d", ft_str_is_lowercase(strwrong));
	return (0);
}
