global mymul3

section .text

mymul3:
    mov rax, rdi
    shl rdi, 1
    add rax, rdi
    ret