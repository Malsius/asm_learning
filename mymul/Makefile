all: mymul

mymul: mymul.S
	nasm -f elf64 mymul.S
	gcc -no-pie mymul.o mainmul.c -o mymul

clean:
	$(RM) *.o mymul
