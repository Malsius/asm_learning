all: mymul3

mymul3: mymul3.S
	nasm -f elf64 mymul3.S
	gcc -no-pie mymul3.o mainmul3.c -o mymul3

clean:
	$(RM) *.o mymul3
