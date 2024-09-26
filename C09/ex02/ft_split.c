/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:22:29 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/26 10:00:06 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		if (str[i] && !is_separator(str[i], charset))
		{
			count++;
			while (str[i] && !is_separator(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !is_separator(str[i], charset))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_separator(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		words;
	int		i;

	words = count_words(str, charset);
	array = (char **)malloc (sizeof(char *) * (words +1));
	if (!array)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && is_separator(*str, charset))
			str++;
		if (*str && !is_separator(*str, charset))
		{
			array[i] = malloc_word(str, charset);
			if (!array[i++])
				return (NULL);
			while (*str && !is_separator(*str, charset))
				str++;
		}
	}
	array[i] = NULL;
	return (array);
}
/*#include <stdio.h>
int main()
{
	int	i;
	char	**result;
	char	str[] = "Hello, my name is, Eyob ";
	char	charset[] = ", ";
	
	result = ft_split(str, charset);
	i = 0;
	while (result[i] != NULL)
	{
		printf("word %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
