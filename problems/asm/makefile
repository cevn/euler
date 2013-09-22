source  := $(wildcard *.asm) 
object  := $(patsubst %.asm,bin/%.o, $(source))

out     := $(patsubst %.asm,bin/%,$(source)) 

CC		:= gcc

.PHONY: clean

all: $(out) 

bin/%: bin/%.o 
	gcc -o $@ $<

bin/%.o: %.asm
	nasm -f elf64 -o $@ $<

clean: 
	rm -rf bin/*
