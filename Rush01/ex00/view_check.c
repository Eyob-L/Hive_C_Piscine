/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtone <elehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:16:04 by elehtone          #+#    #+#             */
/*   Updated: 2024/09/15 20:15:04 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
		
void	fun_view_top(int grid[4][4], int input[16], int *res)
{
	int	row;
        int	col;
	int	tall;
	int	view;

        col = 0;
	while (col < 4)
        {
                row = 0;
		tall = 0;
		view = 0;
                while (row < 4)
                {
                        if (grid[row][col] > tall)
			{
				tall = grid[row][col];
				view++;
			}
			row++;
                }
		if (view != input[col])
			*res = 0;
                col++;
        }
	*res = 1;
}

void	fun_view_bot(int grid[4][4], int input[16], int *res)
{
	int	row;
        int	col;
	int	tall;
	int	view;

        col = 0;
	while (col < 4)
        {
                row = 3;
		tall = 0;
		view = 0;
                while (row >= 0)
                {
                        if (grid[row][col] > tall)
			{
				tall = grid[row][col];
				view++;
			}
			row--;
                }
		if (view != input[col + 4])
			*res = 0;
                col++;
        }
	*res = 1;
}

void	fun_view_left(int grid[4][4], int input[16], int *res)
{
	int	row;
        int	col;
	int	tall;
	int	view;

        row = 0;
	while (row < 4)
        {
                col = 0;
		tall = 0;
		view = 0;
                while (col < 4)
                {
                        if (grid[row][col] > tall)
			{
				tall = grid[row][col];
				view++;
			}
			col++;
                }
		if (view != input[col + 8])
			*res = 0;
                row++;
        }
	*res = 1;
}

void	fun_view_right(int grid[4][4], int input[16], int *res)
{
	int	row;
        int	col;
	int	tall;
	int	view;

        row = 0;
	while (row < 4)
        {
                col = 3;
		tall = 0;
		view = 0;
                while (col >= 0)
                {
                        if (grid[row][col] > tall)
			{
				tall = grid[row][col];
				view++;
			}
			col--;
                }
		if (view != input[col + 12])
			*res = 0;
                row++;
        }
	*res = 1;
}
