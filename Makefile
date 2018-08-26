.PHONY: all fclean clean re

NAME = libftprintf.a

SRCS = srcs/ft_cconv.c \
	   srcs/ft_diconv.c \
	   srcs/ft_hexaconv.c \
	   srcs/ft_print_options.c \
	   srcs/ft_sconv.c \
	   srcs/ft_check_flags.c \
	   srcs/ft_ouconv.c \
	   srcs/ft_printf.c \
	   srcs/ft_tools.c \
	   srcs/ft_width_prec_decimal.c

LIBFT = ./libft/libft.a
LIB = ./libft/

INCLUDES = includes/
FLAGS = -Wall -Werror -Wextra -ggdb -I $(INCLUDES)

CC = gcc
OBJ = $(SRCS:.c=.o)

CL=\x1b[35m
GREEN=\033[1;32m
RED=\033[1;31m
CL2=\x1b[36m
NC=\033[0m

all: $(NAME)

%.o: %.c includes/ft_printf.h
	@$(CC) -c $(FLAGS) $< -o $@

$(NAME): $(LIBFT) $(OBJ) $(OBJ_LIB)
	@libtool -static -o $@ $(LIBFT) $(OBJ)
	@echo "$(GREEN)[✓]$(NC)$(CL) Objects of libft compiled$(NC)"
	@echo "$(GREEN)[✓]$(NC)$(CL) Library $(NAME) built$(NC)"

$(LIBFT):
	@make -C $(LIB)

clean:
	@make clean -C $(LIB)
	@rm -f $(OBJ) $(OBJ_LIB)
	@echo "$(RED)[-]$(NC)$(CL2) Objects of $(NAME) cleaned$(NC)"

fclean:
	@make fclean -C $(LIB)
	@rm -f $(NAME)
	@rm -f $(OBJ) $(OBJ_LIB)
	@echo "$(RED)[-]$(NC)$(CL2) Library $(NAME) cleaned$(NC)"

re: fclean all
