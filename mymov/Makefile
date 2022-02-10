all: mymov

mymov: mymov.S
	nasm -f elf64 mymov.S
	gcc -no-pie mymov.o mainmov.c -o mymov

clean:
	$(RM) *.o mymov
