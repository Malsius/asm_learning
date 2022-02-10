all: myfactorial

myfactorial: myfactorial.S
	nasm -f elf64 myfactorial.S
	gcc -no-pie myfactorial.o mainfactorial.c -o myfactorial

clean:
	$(RM) *.o myfactorial
