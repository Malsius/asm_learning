global main

section .text

main:
    mov rdx, mlen
    mov rsi, message
    mov rdi, 1
    mov rax, 0x1
    syscall

    mov rax, 60
    mov rdi, 0
    syscall

    ret

section .rodata

message:
    db 'Hello, World', 10, 0

mlen: equ $-message