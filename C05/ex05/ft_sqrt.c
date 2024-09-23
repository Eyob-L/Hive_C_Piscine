/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:05:07 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/16 17:54:55 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	s;

	s = 0;
	while (s <= nb)
	{
		if ((s * s) == nb)
			return (s);
		s++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(144));

	return 0;
}*/
