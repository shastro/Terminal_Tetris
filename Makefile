CC = gcc
CLFAGS = -Wall -g
OBJECTS = terminal.o tetris.o
#PARGS = 

all: main terminal.o tetris.o

tetris.o: tetris.c tetris.h
	$(CC) $(CLFAGS) -c tetris.c

terminal.o: terminal.c terminal.h
	$(CC) $(CLFAGS) -c terminal.c

main: main.c terminal.o tetris.o
	$(CC) $(CLFAGS) main.c $(OBJECTS) -o tetris -lm

clean:
	rm tetris terminal.o tetris.o

run: all
	./tetris 