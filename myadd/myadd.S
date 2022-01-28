global myadd

section .text

myadd:
    add rdi, rsi
    mov rax, rdi
    ret