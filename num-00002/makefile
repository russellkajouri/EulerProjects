CFLAGS = -O
CC = g++

SRC = *.cpp
OBJ = $(SRC:.cpp = .o)

numTest : $(OBJ)
	$(CC) $(CFLAGS) -o code $(OBJ)

clean :
	rm -fr core *.o
