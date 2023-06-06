# Globales
CC = gcc
CFLAGS = -c -g
SRC = $(filter-out ConversionTest.c, $(wildcard *.c))
SRC_TEST = $(filter-out TablasDeConversion.c, $(wildcard *.c))
HEADERS = $(wildcard *.h)
OBJ = $(SRC:.c=.o)
OBJ_TEST = $(SRC_TEST:.c=.o)
EXEC = TablasDeConversion
EXEC_TEST = ConversionTest


# Commands: "make", "make test"

build: $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

test: $(OBJ_TEST)
	$(CC) -o $(EXEC_TEST) $(OBJ_TEST)	

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o *.exe
	