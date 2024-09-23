/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:20:10 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/11 12:21:46 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (((str[i] >= 'a' && str[i] <= 'z'))
			|| ((str[i] >= 'A' && str[i] <= 'Z')))
			i++;
		else
			return (0);
	}
	return (1);
}
/*int main ()
{
	char str[] = "ebe rhanu";

	printf("%d", ft_str_is_alpha(str));

	return (0);
}*/
