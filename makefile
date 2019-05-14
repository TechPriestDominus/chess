all: bin/chessviz 

bin/chessviz: build/src/main.o build/src/board_print_plain.o build/src/board.o build/src/board_read.o
	gcc -Wall -Werror build/src/main.o build/src/board_print_plain.o build/src/board.o build/src/board_read.o -o bin/chessviz

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/board_print_plain.o: src/board_print_plain.c
	gcc -Wall -Werror -c src/board_print_plain.c -o build/src/board_print_plain.o

build/src/board.o: src/board.c
	gcc -Wall -Werror -c src/board.c -o build/src/board.o

build/src/board_read.o: src/board_read.c
	gcc -Wall -Werror -c src/board_read.c -o build/src/board_read.o

.PHONY: clean

clean:
rm -rf build/*.omain: main.c
	gcc -Wall -o main main.c
