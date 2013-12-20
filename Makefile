# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfouquet <lfouquet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/16 15:18:10 by lfouquet          #+#    #+#              #
#    Updated: 2013/12/20 15:37:26 by lfouquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = llvm-gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

PATH_INC = includes

PATH_OBJ = obj

PATH_SRC = src

SRC = 	ft_printf.c flag_fct.c fonction_libft.c \
		other.c precision_fct.c printf_fct.c	\
		specifier_fct.c	width_fct.c

OBJ = $(patsubst %.c, $(PATH_OBJ)/%.o, $(SRC))

all : $(NAME)

$(NAME) : $(OBJ)
	@ar -rc $@ $(OBJ)
	@ranlib $(NAME)


$(PATH_OBJ)/%.o : $(addprefix $(PATH_SRC)/, %.c)
	@$(CC) $(CFLAGS) -o $@ -c $^ -I $(PATH_INC)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

namemes :
	@echo -n Compilation de libft

.PHONY: clean fclean re
