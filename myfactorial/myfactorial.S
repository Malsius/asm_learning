global myfactorial
extern wrap_myfactorial

section .text

myfactorial:
    push rbx
    mov rbx, rdi
    dec rdi
    call wrap_myfactorial
    mul rbx
    pop rbx
    ret