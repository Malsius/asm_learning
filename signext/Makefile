all: signext

signext: signext.S
	nasm -f elf64 signext.S
	gcc -no-pie signext.o main_signext.c -o signext

clean:
	$(RM) *.o signext
