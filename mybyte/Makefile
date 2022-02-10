all: mybyte

mybyte: mybyte.S
	nasm -f elf64 mybyte.S
	gcc -no-pie mybyte.o mainbyte.c -o mybyte

clean:
	$(RM) *.o mybyte
