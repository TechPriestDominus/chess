all: bin/chessviz bin/chessviz-test

bin/chessviz: build/src/main.o build/src/chess_print_plain.o build/src/chess.o build/src/chess_read.o
	gcc -Wall -Werror build/src/main.o build/src/chess_print_plain.o build/src/chess.o build/src/chess_read.o -o bin/chessviz

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/chess_print_plain.o: src/chess_print_plain.c
	gcc -Wall -Werror -c src/chess_print_plain.c -o build/src/chess_print_plain.o

build/src/board.o: src/chess.c
	gcc -Wall -Werror -c src/chess.c -o build/src/chess.o

build/src/board_read.o: src/chess_read.c
	gcc -Wall -Werror -c src/chess_read.c -o build/src/chess_read.o

bin/chessviz-test: build/test/main.o build/test/test.o build/src/chess.o build/src/chess_print_plain.o build/src/chess_read.o
	gcc -Wall -Werror build/test/main.o build/test/test.o build/src/chess.o build/src/chess_print_plain.o build/src/chess_read.o -o bin/chessviz-test

build/test/main.o: test/main.c
	gcc -I thirdparty -Wall -Werror -c test/main.c -o build/test/main.o

build/test/test.o: test/test.c
	gcc -I thirdparty -Wall -Werror -c test/test.c -o build/test/test.o


.PHONY: clean

clean:
	rm -rf build/*.o