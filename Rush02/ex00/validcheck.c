/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltug <haltug@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:05:03 by haltug            #+#    #+#             */
/*   Updated: 2024/09/21 20:13:07 by haltug           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

if ((bytes_read = read(file, file_content, CONTENT_SIZE - 1)) == -1)
	return write(2, "Dict Error\n", 11), free(file_content), close(file), 0;
