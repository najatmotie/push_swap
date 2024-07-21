NAME = push_swap

NAME_BONUS = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf 

SRC = mandatory/main.c mandatory/utils/libft_utils1.c mandatory/utils/libft_utils2.c mandatory/utils/utils1.c mandatory/utils/utils2.c \
mandatory/moves/push.c mandatory/moves/swap.c mandatory/moves/rotate.c mandatory/moves/reverse_rotate.c \
mandatory/errors/checks.c mandatory/errors/frees.c \
mandatory/sorting/five_case.c mandatory/sorting/range_algo.c mandatory/sorting/fill.c mandatory/sorting/sort.c 

BNS = bonus/main_bonus.c bonus/utils_bonus/libft_utils1_bonus.c bonus/utils_bonus/libft_utils2_bonus.c bonus/utils_bonus/utils1_bonus.c bonus/utils_bonus/utils2_bonus.c \
bonus/moves_bonus/push_bonus.c bonus/moves_bonus/swap_bonus.c bonus/moves_bonus/rotate_bonus.c bonus/moves_bonus/reverse_rotate_bonus.c \
bonus/errors_bonus/checks_bonus.c bonus/errors_bonus/frees_bonus.c \
bonus/filling_bonus/fill_bonus.c bonus/filling_bonus/sort_bonus.c

OBJ = ${SRC:.c=.o}

OBJBNS = $(BNS:.c=.o)

$(NAME): $(OBJ) mandatory/push_swap.h
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(NAME_BONUS): $(OBJBNS) bonus/push_swap_bonus.h
	$(CC) $(CFLAGS) $(OBJBNS) -o $(NAME_BONUS)

all: $(NAME)

bonus: $(NAME_BONUS)
 
clean :
	$(RM) $(OBJ) $(OBJBNS)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all