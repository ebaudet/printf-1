# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfouquet <lfouquet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/16 15:18:10 by lfouquet          #+#    #+#              #
#    Updated: 2013/12/21 15:22:53 by lfouquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = llvm-gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

PATH_INC = includes

PATH_OBJ = obj

PATH_SRC = src

SRC = 	flag_fct.c fonction_libft.c ft_printf.c length_fct.c 				\
		precision_fct.c printchar.c printdec.c printf_fct.c 				\
		printfloat.c printfloatu.c printhex.c printhexfloat.c 				\
		printhexfloatu.c printhexu.c printlongchar.c printlongstring.c 		\
		printoct.c printpercent.c printpointer.c printscient.c 				\
		printscientu.c printshort.c printshortu.c printstr.c 				\
		specifier_fct.c width_fct.c printudec.c

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
