# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 20:52:52 by marcgar2          #+#    #+#              #
#    Updated: 2024/10/30 20:52:52 by marcgar2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIB = ar -rcs
RM = rm -f
CC = cc
CCFLAGS = -Wall -Werror -Wextra
INCLUDE = ft_printf.h
SRC = ft_print_ptr.c\
	ft_printchar.c\
	ft_printf_utils.c\
	ft_printf.c\
	ft_printhex.c\
	ft_printprcnt.c\
	ft_printunsign.c\
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re