/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:48:30 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/18 18:23:30 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	range = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*#include<stdio.h>
int main()
{	
	int i;
	int j;
	int dif;
	int k;
	i = 3;
	j = 10;
	k = 0;
	dif = j - i;
	int *chap;
	chap = ft_range(i, j);
	while (k < dif)
	{
		printf("%d", chap[k]);
		k++;
	}

	return (0);
}*/
