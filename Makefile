# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/19 21:19:44 by miguelsousa       #+#    #+#              #
#    Updated: 2025/11/19 21:20:20 by miguelsousa      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile para libftprintf
# Cria libftprintf.a no root usando ar (não usa libtool)

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Fonte e objetos do printf
SRCS = ft_printf.c ft_printf_csd.c ft_printf_hex.c ft_printf_ptr.c ft_printf_uns.c
OBJS = $(SRCS:.c=.o)

# Includes (assume ft_printf.h na raiz e libft na pasta libft)
INCLUDES = -I. -Ilibft

.PHONY: all clean fclean re libft

all: libft $(NAME)

# Compila a libft na pasta libft (assume Makefile lá)
libft:
	@if [ -d libft ]; then \
		$(MAKE) -C libft; \
	else \
		echo "Pasta libft não encontrada. Cria a libft antes."; exit 1; \
	fi

# Cria a biblioteca estática com ar (contém apenas os objetos do printf)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "$(NAME) criado."

# Regra padrão para compilar .c -> .o
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@$(MAKE) -C libft clean 2>/dev/null || true
	@echo "Objetos removidos."

fclean: clean
	$(RM) $(NAME)
	@$(RM) libft/libft.a 2>/dev/null || true
	@echo "Bibliotecas estáticas removidas (root e libft)."

re: fclean all