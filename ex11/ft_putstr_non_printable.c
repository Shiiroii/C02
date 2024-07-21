/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:25:20 by liulm             #+#    #+#             */
/*   Updated: 2024/07/21 11:26:47 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_in_hexadecimal(int nb)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb > 16)
	{
		print_in_hexadecimal(nb / 10);
		print_in_hexadecimal(nb % 10);
	}
	else
	{
		ft_putchar(hexa[nb]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			ft_putchar('\\');
			if (str[i] < 16)
			{
				ft_putchar('0');
			}
			print_in_hexadecimal(str[i]);
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
