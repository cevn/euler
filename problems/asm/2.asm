; Euler project, problem 2: 
; print the values of the even valued fibonacci sequence up until 4000000. 

extern printf
global main

section .data
    sum:    db "sum = %d", 10, 0

section .text

main: 
    mov rax, 0 ; a = 0
    mov rbx, 1 ; b = 1
    mov r12, 0

.fib: 
    mov rdx, rax
    add rdx, rbx    ; sum = a + b
    mov rax, rbx    ; a = b
    mov rbx, rdx    ; b = sum

    mov rcx, rbx
    and rcx, 1

    jz .isEven

    cmp rbx, 4000000
    jl .fib
    jmp .done

.isEven:
    add r12, rbx
    cmp rbx, 4000000
    jl .fib

.done:

    mov rsi, r12
    mov rdi, sum
    mov rax, 0
    call printf

    mov rbx, 0
    mov rax, 1
    int 0x80
