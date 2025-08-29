CC=gcc
CFLAGS=-Wall -I./math -I./utils -I./physics -I./graphics -I./network -I./audio -I./input -I./platform -I./ai

SRC=$(wildcard math/*.c utils/*.c physics/*.c graphics/*.c network/*.c audio/*.c input/*.c platform/*.c ai/*.c)
OBJ=$(SRC:.c=.o)


all: test_math test_utils libbiblioteca.so libbiblioteca.dll
libbiblioteca.so: biblioteca.c $(SRC)
	$(CC) $(CFLAGS) -fPIC -shared -o libbiblioteca.so biblioteca.c $(SRC)

libbiblioteca.dll: biblioteca.c $(SRC)
	$(CC) $(CFLAGS) -shared -o libbiblioteca.dll biblioteca.c $(SRC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test_math: tests/test_math.c $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

test_utils: tests/test_utils.c $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f */*.o test_math test_utils libbiblioteca.so libbiblioteca.dll
