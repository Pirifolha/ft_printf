# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/19 21:19:44 by miguelsousa       #+#    #+#              #
#    Updated: 2025/11/19 21:49:26 by misousa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = ft_printf.c ft_printf_csd.c ft_printf_hex.c ft_printf_ptr.c
OBJS = $(SRCS:.c=.o)

INCLUDES = -I. -Ilibft

.PHONY: all clean fclean re libft

all: libft $(NAME)

libft:
	@if [ -d libft ]; then \
		$(MAKE) -C libft; \
	else \
		echo "Libft not found"; exit 1; \
	fi

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "$(NAME) created."

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@$(MAKE) -C libft clean 2>/dev/null || true
	@echo "OBJS removed"

fclean: clean
	$(RM) $(NAME)
	@$(RM) libft/libft.a 2>/dev/null || true
	@echo "libs removed (root e libft)."

re: fclean all

norm:
	@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm