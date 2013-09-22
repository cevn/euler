; euler project, problem 3
; what is the largest prime factor of the number 600851475143? 
extern printf
global main

section .data
    sum:    db      "prime factor found: %d", 10, 0
    num:    dq      600851475143

section .text

main: 
    mov rax, [num] 
    mov rbx, 2 ;rbx is used as the iterator 
    mov rcx, 0 ;rcx is the square root of the number to be factored and is used
               ;as a limit

    cvtsi2ss xmm1, rax; Convert integer to floating point at xmm1
    sqrtss xmm1, xmm1           ; Take square root of whatever is in xmm1
    cvttss2si rcx, xmm1         ; Convert xmm1 to integer at rcx

    .loop2:
        call .factors           ; result stored in rax; parameter is rbx
        cmp rax, 0
        je .isPrime

    .iterate:         ; add 1 to iterator, check if we're done, if not, jump
                      ; back to loop2, if done, jump to finished. 
        add rbx, 1
        cmp rbx, rcx 
        jl .loop2

        jmp .finished


.isPrime:
    push rax
    push rdx

    xor rdx, rdx
    mov rax, [num] 
    div rbx
    cmp rdx, 0
    je .doprint

    pop rdx
    pop rax
    
    jmp .iterate


.doprint:                       ; Prints the value currently in rbx. 
    push rax
    push rbx
    push rcx
    push rdx
        
    mov rsi, rbx
    mov rdi, sum
    mov rax, 0
    call printf
    
    pop rdx
    pop rcx
    pop rbx
    pop rax

    jmp .iterate

.factors:                       ; function to calculate how many factors are in parameter rbx. return value: rax
                                ; function edits rax register, restores the values of the rest

    push rbx
    push rcx
    push rdx
    push r12

    cvtsi2ss xmm1, rbx          ; Convert integer to floating point at xmm1
    sqrtss xmm1, xmm1           ; Take square root of whatever is in xmm1
    cvttss2si rcx, xmm1         ; Convert xmm1 to integer at rcx

    mov rax, rbx
    mov rbx, 2
    mov r12, 0
    
    .loop: 
        push rax

        xor rdx, rdx
        div rbx

        pop rax
        add rbx, 1

        cmp rdx, 0
        je .divisible

        cmp rbx, rcx
        jl .loop

        jmp .done

    .divisible: 
        add r12, 1
        jmp .loop


    .done:
        mov rax, r12
        pop r12
        pop rdx
        pop rcx
        pop rbx

        ret 

.finished:
    mov rbx, 0
    mov rax, 1
    int 0x80
