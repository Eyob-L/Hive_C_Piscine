/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:22:30 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/18 15:33:46 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	dup = (char *)malloc((len + 1) * sizeof (char));
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
/*#include<stdio.h>
int main()
{
	char src[] = "Hello my name is eyob";
	printf("Duplicate : %s\n", ft_strdup(src));
	printf("Original : %s", src);

	return 0;
}*/
