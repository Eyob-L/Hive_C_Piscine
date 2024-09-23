/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:04:03 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/20 11:15:16 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i] && s1[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*int main()
{
	char s1[] = "tatia";
	char s2[] = "tata";
	unsigned int a = 3;
	printf("%d", ft_strncmp(s1, s2, a));

	return (0);
}*/
