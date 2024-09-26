# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eberhanu <eberhanu@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 12:14:54 by eberhanu          #+#    #+#              #
#    Updated: 2024/09/24 12:53:35 by eberhanu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Wextra -Wextra -c {} \;
ar rc libft.a *.o
find . -name "*.o" -type f -delete
