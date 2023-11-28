# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 11:38:31 by alorenza          #+#    #+#              #
#    Updated: 2023/11/21 11:38:31 by alorenza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME 	= libftprintf.a
INCLUDE = ./include/ 
LIBFT_DIR 	= ./libft/
SRC_DIR = ./src/
OBJ_DIR = ./obj/
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I
CLEAN = rm -rf
COMP = ar rcs
#Colores

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#Sources

SRC_FILES = ft_printf.c ft_printf_utils.c
OBJ_FILES = $(SRC_FILES:.c=.o)

#Direcciones

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
LIBFT = $(addprefix $(LIBFT_DIR), libft.a)

all: obj $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	@echo "$(GREEN)compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	@mv $(LIBFT_DIR)./libft.a ./$(NAME)
	@$(COMP) $(NAME) $(OBJ)
	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

clean:
	@$(CLEAN) $(OBJ_DIR)
	@echo "$(GREEN)Cleaned Obj$(DEF_COLOR)"

fclean:
	@$(CLEAN) $(NAME)
	@$(CLEAN) -f $(LIBFT)/libft.a
	@echo "$(GREEN)Cleaned all$(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)"
	
.PHONY: all clean fclean re