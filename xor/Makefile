all: xor

xor: xor.S
	nasm -f elf64 xor.S
	gcc -no-pie xor.o main_xor.c -o xor

clean:
	$(RM) *.o xor
