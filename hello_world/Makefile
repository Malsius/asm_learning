all: hello

hello: hello.S
	nasm -f elf64 hello.S
	gcc -no-pie hello.o -o hello

clean:
	$(RM) *.o hello
