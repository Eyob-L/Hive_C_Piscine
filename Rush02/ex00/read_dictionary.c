/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:35:08 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/21 18:44:30 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h> 
#include "dictionary.h"

void	read_dictionary(char *file_name)
{
	int		file;
	char		*file_content;
	ssize_t		bytes_read;
	int		entry_count;
	t_dict_entry	*dictionary;
	
	file = open(file_name, O_RDONLY);
	if (file == -1)
	{
		write(1, "Dict Error\n", 11);
		return;
	}
	file_content = (char *)malloc(CONTENT_SIZE);
	if (file_content == NULL)
	{
		write(1, "Memory allocation failed\n", 25);
		close(file);
		return;
	}
	bytes_read = read(file, file_content, CONTENT_SIZE - 1);
	if (bytes_read == -1)
	{
		write(1, "Dict Error\n", 11);
		free(file_content);
		close(file);
		return;
	}
	file_content[bytes_read] = '\0';
	dictionary = parse_dictionary(file_content, &entry_count);
	free_dictionary(dictionary, entry_count);
	free(file_content);
	close(file);
}
