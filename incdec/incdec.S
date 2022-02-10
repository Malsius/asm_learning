global incone
global decone

section .text

incone:
    inc rdi
    mov rax, rdi
    ret

decone:
    dec rdi
    mov rax, rdi
    ret