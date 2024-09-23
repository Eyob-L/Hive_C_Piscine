/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtone <elehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 08:12:02 by elehtone          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/09/15 20:18:01 by eberhanu         ###   ########.fr       */
=======
/*   Updated: 2024/09/15 20:17:01 by elehtone         ###   ########.fr       */
>>>>>>> 935e0533fb22e93832d3f4939c0f330051ea926d
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fun_view_top(int grid[4][4], int input[16], int *res);
void	fun_view_bot(int grid[4][4], int input[16], int *res);
void	fun_view_left(int grid[4][4], int input[16], int *res);
void	fun_view_right(int grid[4][4], int input[16], int *res);
int		fun_solver(int grid[4][4], int inputs[16], int row, int col);

int	fun_check_views(int grid[4][4], int input[16], int *res)
{
	fun_view_top(grid, input, res);
	fun_view_bot(grid, input, res);
	fun_view_left(grid, input, res);
	fun_view_right(grid, input, res);
	if (*res == 0)
		return (0);
	else if (*res == 1)
		return (1);
	else
		return (69);
}

void	fun_checkinput(char *par, int *input)
{
	int	in_count;

	in_count = 0;
	while (*par != '\0' && (*par == 32 || (*par > 47 && *par < 58)))
	{
		if (*par > 47 && *par < 58)
		{
			input[in_count] = *par - '0';
			in_count++;
		}
		par++;
	}
}

void	fun_output(int grid[4][4])
{
	char	c;
	int		row;
	int		col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = grid[row][col] + '0';
			write (1, &c, 1);
			write (1, " ", 1);
			col++;
		}
		write (1, "\n", 1);
		row++;
	}
}

int	main(int argc, char **argv)
{
	char	*in_str;
	int		input[16];
	int		grid[4][4];
	int		res;

	grid[4][4] = {0};
	res = 0;
	if (argc != 2)
		write(1, "wrong argc\n", 11);
	in_str = argv[1];
	fun_checkinput(in_str, input);
	fun_output(grid);
<<<<<<< HEAD

	res = 0;
	fun_check_views(grid, input, &res);

	return 0;
=======
	return (0);
>>>>>>> 935e0533fb22e93832d3f4939c0f330051ea926d
}
