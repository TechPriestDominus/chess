all: bin/chessviz

bin/chessviz: build/src/main.o build/src/chess_print_plain.o build/src/chess.o build/src/chess_read.o
	gcc -Wall -Werror build/src/main.o build/src/chess_print_plain.o build/src/chess.o build/src/chess_read.o -o bin/chessviz

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/chess_print_plain.o: src/chess_print_plain.c
	gcc -Wall -Werror -c src/chess_print_plain.c -o build/src/chess_print_plain.o

build/src/chess.o: src/chess.c
	gcc -Wall -Werror -c src/chess.c -o build/src/chess.o

build/src/chess_read.o: src/chess_read.c
	gcc -Wall -Werror -c src/chess_read.c -o build/src/chess_read.o


.PHONY: clean

clean:
	rm -rf build/*.o