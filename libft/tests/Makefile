NAME = tester

SRCS = test.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

INCLUDES = -I..

LDLIBS = -lft

LDFLAGS = -L..

all: $(NAME)

$(NAME): $(OBJS) ../libft.a
	$(CC) -o $@ $(CFLAGS) $(OBJS) $(INCLUDES) $(LDFLAGS) $(LDLIBS)

%.o: %.c
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) -c $<

../libft.a:
	make -C ..

test: all
	./$(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test
