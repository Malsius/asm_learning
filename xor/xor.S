global xor

section .text

xor:
    xor rdi, rsi
    mov rax, rdi
    ret