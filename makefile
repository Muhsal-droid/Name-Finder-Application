all:babyQuery.o removeCommas.o chop.o babiesQuery.o removeCommas.o chop.o
	gcc -ansi -Wall -o babyQuery babyQuery.o removeCommas.o chop.o
	gcc -ansi -Wall -c babyQuery.c
	gcc -ansi -Wall -o babiesQuery babiesQuery.c removeCommas.o chop.o
	gcc -ansi -Wall -c babiesQuery.c
	gcc -ansi -Wall -c removeCommas.c
	gcc -ansi -Wall -c chop.c




babyQuery: babyQuery.o removeCommas.o chop.o
	gcc -ansi -Wall -o babyQuery babyQuery.o removeCommas.o chop.o

babyQuery.o: babyQuery.c
	gcc -ansi -Wall -c babyQuery.c


babiesQuery: babiesQuery.o removeCommas.o chop.o
	gcc -ansi -Wall -o babiesQuery babiesQuery.c removeCommas.o chop.o

babiesQuery.o: babiesQuery.c
	gcc -ansi -Wall -c babiesQuery.c





removeCommas.o: removeCommas.c
	gcc -ansi -Wall -c removeCommas.c

chop.o: chop.c
	gcc -ansi -Wall -c chop.c

clean:
	rm *.o
	rm  babyQuery
	rm  babiesQuery





