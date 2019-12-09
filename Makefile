# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsaura-n <tsaura-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/07 19:12:19 by tsaura-n          #+#    #+#              #
#    Updated: 2019/12/07 20:36:37 by tsaura-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	ft_ls

MAIN	=	./src/main.c
FILE	=

SRC		=	$(addsuffix .c, $(FILE))
SRC_DIR	=	./src/

OBJ		=	$(addsuffix .o, $(FILE))

INC		=	./include/
FT_ARC	=	./libft/libft.a

CC		=	gcc
CFLAGS	=	-Werror -Wextra -Wall
DEBUG	=	-g

# ********************************************************* #

all: $(NAME)

$(NAME): $(addprefix $(SRC_DIR),$(SRC))
	@make mlibft
	@make mls


mls:
	@$(CC) $(CFLAGS) $(MAIN) $(addprefix $(SRC_DIR),$(SRC)) -I $(INC) $(FT_ARC) -o $(NAME)
	@echo "make:\t"$(NAME)

mlibft:
	@make -C libft/

clean:
	@/bin/rm -f $(OBJ)
	@make clean -C libft/
	@echo $@":\t"$(NAME)

fclean:
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(OBJ)
	@make fclean -C libft/
	@echo $@":\t"$(NAME)

re: fclean all

# **************************************************************************** #