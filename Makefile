CC			= gcc
CFLAGS	= -Wall -ansi -pedantic
_OBJD   = objects
_OBJS	  = \
	blockchain.o \
	main.o
OBJS    = $(patsubst %,$(_OBJD)/%,$(_OBJS))

all: bce.exe

bce.exe: $(OBJS)
	$(CC) -o bin/$@ $^ 

$(_OBJD)/%.o: src/%.c
	$(CC) $(CFLAGS) -c $^ -o $@

.PHONY: clean
clean:
	rm -f $(OBJS)
	rm -f bin/bce
