## makefile by Sameer Dhar. the only problem is that it links lgmp and lm on every file. 
## not sure if that affects run time. 

SRCS = $(wildcard *.java)

CC = javac

PROGS = $(patsubst %.java,%,$(SRCS))

all: $(PROGS)
%: %.java
	$(CC) $(SRCS) -d bin/
