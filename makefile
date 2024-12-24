EXECS = main.c

all: main.o
	gcc -g -Wall -Wextra -pthread -o tasker main.c

main: main.c
	gcc -g -Wall -Wextra -pthread -c tasker main.c

clean:
	rm -f tasker main.o

run: all
	./tasker