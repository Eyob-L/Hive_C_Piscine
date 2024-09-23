/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun_solver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:21:23 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/15 20:22:03 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fun_check_views(int grid[4][4],int input[16], int *res);
int	is_unique(int grid[4][4], int row, int col, int num);

int	fun_solver(int grid[4][4], int input[16], int row, int col)
{
	int num;
	if (row == 4)
		return fun_check_views (grid, input, *res);
	if (col == 4)
		return fun_solver(grid, input, row + 1, 0);
	num = 1;
	while (num <= 4)
	{
		if (is_unique(grid, row, col, num))
		{
			grid[row][col] = num;
			if (fun_solver(grid, input, row, col))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
