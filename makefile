# Build an executable named "main", which prints "Echad Mi Yodea"
CC = g++
CFLAGS = -Wall -Werror -c
OBJ = pesach_.o
EXEC = main

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $@

pesach_.o: pesach_.cpp
	$(CC) $(CFLAGS) $*.cpp

clean:
	rm -f $(OBJ) $(EXEC)

