# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 20:52:52 by marcgar2          #+#    #+#              #
#    Updated: 2024/10/31 20:11:07 by marcgar2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIB = ar rcs
RM = rm -f
CC = cc
CCFLAGS = -Wall -Werror -Wextra
<<<<<<< HEAD
INCLUDE = 
=======
>>>>>>> 01187c53855965d1fb69378a1261cb357859697e
SRC = ft_print_ptr.c\
	ft_printchar.c\
	ft_printf_utils.c\
	ft_printf.c\
	ft_printhex.c\
	ft_printprcnt.c\
	ft_printunsign.c\
	ft_itoa.c\
	ft_atoi.c\
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(LIB) $(NAME) $(OBJ)

%.o: %.c
		$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re