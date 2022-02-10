all: mymul2

mymul2: mymul2.S
	nasm -f elf64 mymul2.S
	gcc -no-pie mymul2.o mainmul2.c -o mymul2

clean:
	$(RM) *.o mymul2
