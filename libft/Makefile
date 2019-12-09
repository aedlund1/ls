# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsaura-n <tsaura-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 16:17:19 by tsaura-n          #+#    #+#              #
#    Updated: 2019/12/07 23:09:35 by tsaura-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft
NAME_ARC	=	$(addsuffix .a, $(NAME))

FILE =			ft_isalnum ft_isprint ft_strcpy ft_strncpy ft_tolower \
				ft_isalpha ft_strcat ft_strlen ft_strnstr ft_toupper \
				ft_isascii ft_strchr ft_strncat ft_strlcat ft_strdup \
				ft_strndup ft_strrchr ft_isdigit ft_strcmp ft_strncmp \
				ft_strstr ft_memchr ft_memcmp ft_memmove ft_memset  \
				ft_memcpy ft_memccpy ft_bzero ft_atoi ft_memalloc ft_memdel \
				ft_strnew ft_strdel ft_strclr ft_striter ft_striteri \
				ft_striteri ft_strmap ft_strmapi ft_strequ ft_strnequ \
				ft_strsub ft_strjoin ft_strtrim ft_strtrim_char ft_strsplit \
				ft_wcnt ft_wlen ft_itoa ft_putchar ft_putstr ft_putendl \
				ft_putnbr ft_putchar_fd ft_putstr_fd ft_putendl_fd \
				ft_putnbr_fd ft_strset ft_intlen ft_intsize ft_lstnew \
				ft_lstdelone ft_lstdel ft_lstadd ft_lstaddend ft_lstiter \
				ft_lstmap ft_put_ithdigit ft_put_ithdigit_fd get_next_line \
				ft_putstr_nl
SRC			=	$(addsuffix .c, $(FILE))
OBJ			=	$(addsuffix .o, $(FILE))
INC			=	include/
CC			=	gcc
CFLAGS		= -Wall -Wextra -Werror

.PHONY: all clean fclean re $(NAME)

# ********************************************************* #

all: $(NAME_ARC)

$(NAME_ARC): $(SRC) 
	@$(CC) $(CFLAGS) -c $(SRC) -I $(INC)
	@ar rc $@ $(OBJ)
	@echo "make:\t"$(NAME)

clean:
	@/bin/rm -f $(OBJ)
	@echo $@":\t"$(NAME)
	
fclean:
	@/bin/rm -f $(NAME_ARC)
	@/bin/rm -f $(OBJ)
	@echo $@":\t"$(NAME)

re : fclean all

# **************************************************************************** #