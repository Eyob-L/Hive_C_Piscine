/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 08:10:20 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/05 12:49:33 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int n)
{
	int	n1;
	int	n2;

	if (n > 9)
	{
		n1 = n / 10;
		n2 = n % 10;
		ft_putchar(n1 + 48);
		ft_putchar(n2 + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_numbers(i);
			ft_putchar(32);
			ft_print_numbers(j);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(32);
			}
			++j;
		}
		++i;
	}
}
