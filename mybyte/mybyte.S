global mybyte

section .text

mybyte:
    and rdi, 0xFF
    mov rax, rdi
    ret