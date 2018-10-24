all: fileio.c
	gcc fileio.c
run:
	./a.out
clean:
	rm a.out
