global mymul2

section .text

mymul2:
    shl rdi, 1
    mov rax, rdi
    ret