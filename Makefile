CC = gcc
CFLAGS = -Wall  -Wextra  -Werror
NAME = anagrammes
SRCS = ft_strlen.c  ft_strcmp.c  ft_tolower.c  ft_sort_chars.c  ft_are_anagrams.c  main.c
OBJS= $(SRC:.c=.o)



all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.c
          $(CC) $(CFLAGS) -c $< -o  $@

.PHONY: all clean fclean re


clean:
	rm -f  $(OBJS)

fclean: clean
	rm -f  $(NAME)

re: fclean all
