	CC=gcc
	OBJECTS_MAIN=main.o
	FLAGS=	-Wall	-g
	OBJECT_MYBANK=myBank.o

all:	maind	mains
	 
maind:	mybankd		$(OBJECTS_MAIN)
	$(CC)	$(OBJECTS_MAIN)	-o maind	./libmyBank.so
	
mybankd:	$(OBJECT_MYBANK)
	$(CC)	-shared	-o libmyBank.so	$(OBJECT_MYBANK)
	
mains:	$(OBJECTS_MAIN)	mybanks
	$(CC)	$(OBJECTS_MAIN)	-o mains	libmyBank.a
	
mybanks:	$(OBJECT_MYBANK)
	ar	rc	libmyBank.a	$(OBJECT_MYBANK)



myBank.o:	myBank.c
	$(CC)	$(FLAGS)	-fPIC	-c	myBank.c

$(OBJECTS_MAIN):	main.c myBank.h
	$(CC)	$(FLAGS)	-fPIC	-c main.c 

.PHONY:	clean all

clean:
	rm	-f	*.o	mains	maind	*.so	*.a
