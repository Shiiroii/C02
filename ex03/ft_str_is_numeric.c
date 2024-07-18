/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:44:28 by liulm             #+#    #+#             */
/*   Updated: 2024/07/18 15:47:26 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	char	strright[] = "0123456789";
	char	strempty[] = "";
	char	strwrong[] = "012s34567 89";

	printf("%d\n", ft_str_is_numeric(strright));
	printf("%d\n", ft_str_is_numeric(strempty));
	printf("%d", ft_str_is_numeric(strwrong));
	return (0);
}
