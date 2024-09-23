/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:52:48 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/17 15:14:04 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	j;

	ac = 1;
	while (av[ac])
	{	
		j = 0;
		while (av[ac][j] != '\0')
		{
			write(1, &av[ac][j], 1);
			j++;
		}
		write(1, "\n", 1);
		ac++;
	}
	return (0);
}
