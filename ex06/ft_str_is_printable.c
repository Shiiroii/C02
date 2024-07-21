/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:51:59 by liulm             #+#    #+#             */
/*   Updated: 2024/07/21 11:26:23 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (!(str[i] >= 32 && str[i] != 127))
			return (0);
		i++;
	}
	return (1);
}

// ---------------------------------------

#include <stdio.h>

int	main(void)
{
	char	strright[] = "Salut 231354";
	char	strempty[] = "";
	char	strwrong[] = " Salut\x0AToi";
	printf("%d\n", ft_str_is_printable(strright));
	printf("%d\n", ft_str_is_printable(strempty));
	printf("%d", ft_str_is_printable(strwrong));
	return (0);
}
