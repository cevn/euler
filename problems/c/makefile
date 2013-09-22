## makefile by Sameer Dhar. the only problem is that it links lgmp and lm on every file. 
## not sure if that affects run time. 

SRCS = $(wildcard *.c)

CC = gcc

PROGS = $(patsubst %.c,%,$(SRCS))

DEPS = -lgmp -lm

CFLAGS = -O3 -Wall -Wextra -Werror

all: $(PROGS)
%: %.c
	$(CC) $(CFLAGS) -o bin/$@.o $< $(DEPS)
