global mytest

section .text

mytest:
    cmp rdi, rsi
    jb myres1 ; jl for signed
    mov rax, 0
    ret

myres1:
    mov rax, 1
    ret