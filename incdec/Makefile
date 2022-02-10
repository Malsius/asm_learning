all: incdec

incdec: incdec.S
	nasm -f elf64 incdec.S
	gcc -no-pie incdec.o main_incdec.c -o incdec

clean:
	$(RM) *.o incdec
