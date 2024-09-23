/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltug <haltug@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:01:34 by haltug            #+#    #+#             */
/*   Updated: 2024/09/21 21:02:13 by haltug           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

file_content = read(file, buffer, CONTENT_SIZE - 1);
if (file_content == -1) {
    write(1, "Read Error\n", 11);
    close(file);
    return;
}
