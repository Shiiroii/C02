/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:35:37 by liulm             #+#    #+#             */
/*   Updated: 2024/07/21 14:41:57 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size <= 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest));
}

// ---------------------------------------

#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Salut Salut Salut";
	char	a[ft_strlen(str)];
	ft_strlcpy(a, str, 5);
	printf("ft_strlcpy : %s\n", a);
}
