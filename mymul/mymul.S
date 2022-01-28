global mymul

section .text

mymul:
    mov rax, rdi
    mul rsi
    ret