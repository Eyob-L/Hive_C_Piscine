/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:01:56 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/19 16:42:19 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;
	int		totalsize;

	totalsize = 0;
	i = 0;
	while (i < size)
	{
		totalsize += ft_str_len(strs[i]) + ft_str_len(sep);
		i++;
	}
	totalsize -= ft_str_len(sep);
	result = malloc((totalsize + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size -1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*#include <stdio.h>
int main()
{
	char *strs[] = {"Hello", "My name", "Is", "Eyob", "!"};
	char sep[] = ", ";
	char *result = ft_strjoin(5, strs, sep);
	printf("%s", result);
	free(result);
	return (0);
}*/
