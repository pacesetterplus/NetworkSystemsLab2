CC     = clang
CFLAGS = -W -Wall -Wextra -lpthread  -g

wserver: wserver.c
	$(CC) $(CFLAGS) -o wserver wserver.c

clean:
	rm -f wserver

