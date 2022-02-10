all: mytest

mytest: mytest.S
	nasm -f elf64 mytest.S
	gcc -no-pie mytest.o maintest.c -o mytest

clean:
	$(RM) *.o mytest
