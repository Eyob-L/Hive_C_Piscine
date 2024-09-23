/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:27:46 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/19 16:46:16 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
/*#include<stdio.h>
int main()
{
	int i;
	int size;
	int min;
	int max;
	int *str;
	i = 0;
	min = 3;
	max = 18;
	size = ft_ultimate_range(&str, min, max);
	if (size == -1)
		printf("memory allocation failed\n");
	if (size == 0)
		printf("invalid min and max\n");
	printf("size of the array %d\n", size);
	while (i < size)
	{
		printf("%d", str[i]);
		i++;
	}
	free(*range);

	return (0);
}*/
