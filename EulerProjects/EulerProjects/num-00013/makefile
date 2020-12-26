CFLAGS = -O0 -Wall -W -Wextra -Werror -std=c++11
CC = g++

SRC = *.cpp
OBJ = $(SRC:.cpp = .o)

numTest : $(OBJ)
	$(CC) $(CFLAGS) -o code $(OBJ)
	@clear
	@echo "ready to fire ..."

clean :
	$(RM) core *.o
