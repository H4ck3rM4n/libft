NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra -std=c99 -c

SRC		= ft_bzero \
		  ft_memmove \
		  ft_memset	\
		  ft_memcpy	\
		  ft_memccpy

INC		= libft.h
INC_DIR	= include
SRC_DIR	= src
OBJ_DIR	= obj

OBJ		= $(SRC:.c=.o)
OBJS	= $(foreach element, $(OBJ), $(OBJ_DIR)/$(element))
SRCS	= $(foreach element, $(SRC), $(SRC_DIR)/$(element))


all: obj_make $(NAME)
	ar rm $(NAME) $(OBJS)
	ranlib $(NAME)

obj_make: $(SRCS) $(INC_DIR)/$(INC)
	gcc $(CFLAGS) $(OBJS) -I$(INC_DIR) $(SRCS) $(INC)
	mv *.o $(OBJ_DIR)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
