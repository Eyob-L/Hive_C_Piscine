/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_unique.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:01:10 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/15 20:09:40 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_unique(int grid[4][4], int row, int col, int num)
{
	int	i;
	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i<4)
	{
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

