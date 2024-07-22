/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:07:58 by liulm             #+#    #+#             */
/*   Updated: 2024/07/22 12:23:27 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// ---------------------------------------

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*str;

	str = "Salut Salut Salut";
	char	a[ft_strlen(str)];
	ft_strcpy(a, str);
	char	b[ft_strlen(str)];
	strcpy(b, str);
	printf("ft_strcpy : %s\n", a);
	printf("strcpy : %s", b);
}
