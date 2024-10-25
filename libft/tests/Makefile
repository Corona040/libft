NAME = tester

SRCS = test.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

LDLIBS = -lft -lbsd -lmalloc_hook

LDFLAGS = -L.. -L/usr/lib/x86_64-linux-gnu -L. -Wl,-rpath=.

MALLOC = malloc_hook.c

LMALLOC = lib$(MALLOC:.c=.so)

all: $(NAME)

$(NAME): $(OBJS) $(LMALLOC)
	make -C ..
	$(CC) -rdynamic -o $@ $(OBJS) $(CFLAGS) $(LDLIBS) $(LDFLAGS)

$(LMALLOC): $(MALLOC)
	$(CC) -shared -o $(LMALLOC) -fPIC $(MALLOC)

%.o: %.c
	$(CC) -o $@ $(CFLAGS) -c $<

test: all
	./$(NAME)

clean:
	rm -rf $(OBJS)
	make clean -C ..

fclean: clean
	rm -rf $(NAME) $(LMALLOC)
	make fclean -C ..

re: fclean all

.PHONY: all clean fclean re test
