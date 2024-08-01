/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:25:20 by liulm             #+#    #+#             */
/*   Updated: 2024/08/01 10:47:15 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_in_hexadecimal(char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (c >= 16)
	{
		ft_putchar(hexa[c / 16]);
		ft_putchar(hexa[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexa[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] == 127)
		{
			ft_putchar('\\');
			print_in_hexadecimal(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

// ---------------------------------------

int	main(void)
{
	char	str[] = "Salut \x0A salut \x7F ! \n";

	ft_putstr_non_printable(str);
	ft_putchar('\n');
	return (0);
}
