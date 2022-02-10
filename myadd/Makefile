all: myadd

myadd: myadd.S
	nasm -f elf64 myadd.S
	gcc -no-pie myadd.o mainadd.c -o myadd

clean:
	$(RM) *.o myadd
