/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:13:46 by eberhanu          #+#    #+#             */
/*   Updated: 2024/09/21 18:38:39 by eberhanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
#define DICTIONARY_H

#define CONTENT_SIZE 1024

typedef struct s_dict_entry
{
    int number;
    char *word;
} t_dict_entry;


t_dict_entry *parse_dictionary(char *file_content, int *entry_count);
void free_dictionary(t_dict_entry *dictionary, int entry_count);

#endif
