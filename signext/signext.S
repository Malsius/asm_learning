global ushort2ulong
global uint2ulong
global int2long

section .text

ushort2ulong:
    mov ax, di
    movzx rax, ax
    ret

uint2ulong:
    mov eax, edi
    ret

int2long:
    movsx rax, edi
    ret
