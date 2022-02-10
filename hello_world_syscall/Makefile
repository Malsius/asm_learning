all: hello_syscall

hello_syscall: hello_syscall.S
	nasm -f elf64 hello_syscall.S
	gcc -no-pie hello_syscall.o -o hello_syscall

clean:
	$(RM) *.o hello_syscall
