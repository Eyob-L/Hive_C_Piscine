/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:30:30 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/11 12:29:19 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if ((str[i] >= ' ') && (str[i] <= '~'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*int main ()
{
	char str[] = "Sadshfjhgjgh    fggshhgg0)(((DFADGH";

	printf("%d", ft_str_is_printable(str));

	return (0);
}*/
