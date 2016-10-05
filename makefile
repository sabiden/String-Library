strlib: MyStrLib.c
	gcc -o strlib MyStrLib.c


run: strlib
	./strlib
