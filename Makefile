# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/04 12:19:58 by abouvero          #+#    #+#              #
#    Updated: 2018/01/07 18:05:39 by abouvero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_NAME = get_struct.c \
			str_controller.c \
			format_validation.c \
			str_converter.c \
			redirectL.c \
			unicode.c \
			width.c \
			precision.c \
			flags.c
OBJ_NAME = $(SRC_NAME:.c=.o)
INC_NAME = ft_printf.h

OBJDIR = ./obj/
INCDIR = ./includes/
SRCDIR = ./src/

NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra

SRC = $(addprefix $(SRCDIR), $(SRC_NAME))
INC = $(addprefix $(INCDIR), $(INC_NAME))
OBJ = $(addprefix $(OBJDIR), $(OBJ_NAME))

LIBFT = libft/libft.a

all: $(NAME)

$(NAME): MKLIB $(OBJ)
	libtool -static -o $(NAME) $(OBJ) $(LIBFT)

MKLIB:
	@make -C libft/

$(OBJDIR)%.o: $(SRCDIR)%.c
	@mkdir -p $(OBJDIR)
	gcc -o $@ -c $< $(FLAGS)

clean:
	@rm -rf $(OBJDIR)
	@make -C libft/ clean

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all
