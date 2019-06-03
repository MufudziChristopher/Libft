# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 14:16:13 by mnhamoin          #+#    #+#              #
#    Updated: 2019/06/03 14:25:38 by mnhamoin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
CFLAGS = -Wall - Werror - Wextra
TARGET = ft_memset

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	/bin/rm -f *.o
	
fclean: clean
	/bin/rm -f $(TARGET)

re: fclean
	all

