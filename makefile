CC=gcc
LIBMYMATHOBJECTS=myBank.o
.PHONY: mybank clean all
FLAGS=-Wall -g -fPIC
AR=ar

mybanks:
	$(AR) -rcs libmyBank.a $(LIBMYMATHOBJECTS)

mybankd:
	$(CC) -shared -o libmyBank.so $(LIBMYMATHOBJECTS)

mains: main.o libmyBank.a
	$(CC) $(FLAGS) -o mains main.o libmyBank.a

maind: main.o libmyBank.so
	$(CC) $(FLAGS) -o maind main.o ./libmyBank.so

libmyBank.a:myBank.o
	$(AR) -rcs libmyBank.a myBank.o

libmyBank.so:myBank.o
	$(CC) -shared -o libmyBank.so myBank.o

main.o:main.c
	$(CC) $(FLAGS) -c main.c

myBank.o:myBank.c
	$(CC) $(FLAGS) -c myBank.c

all: mains maind
clean:
	rm -f maind mains *.so *.a *.o


