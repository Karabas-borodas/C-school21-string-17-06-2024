CC=gcc
CFLAGS=-Wall -Werror -Wextra -std=c11

all: clean string
string: string.o
	$(CC) $(CFLAGS) string.o -o string

string.o: string.c
	$(CC) $(CFLAGS) -c string.c

rebuild:
	clean s21_cat

clean: 
	rm -f *.o

check : 
	clang-format -n *.c
	cppcheck --enable=all --suppress=missingIncludeSystem *.c
	