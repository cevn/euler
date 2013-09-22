; 1.asm
; 
; Euler Project, Problem 1: Find the sum of all the multiples of 3 or 5 below 1000. 
; Compilation: on x64 linux, 
; nasm -g -f elf64 1.asm
; ld -g -o 1 1.o 




extern _printf
global _main

section .data
    
    fmt:    db "rsi = %d", 10, 0 ; The printf format, "\n",'0'

section .text
_main:

    mov rdx, 0 ; sum

    mov rax, 3
.loop1: 
    add rdx, rax
    add rax, 3

    cmp rax, 1000
    jl .loop1

    mov rax, 5
.loop2: 
    add rdx, rax
    add rax, 15

    cmp rax, 1000
    jl .loop2

    mov rax, 10 
.loop3: 
    add rdx, rax
    add rax, 15

    cmp rax, 1000
    jl .loop3

mov rsi, rdx
mov rdi, fmt
mov rax, 0
call _printf

mov rbx, 0
mov rax, 1
int 0x80
