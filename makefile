default: tageumrechner

tageumrechner.o: tageumrechner.c
	gcc -c tageumrechner.c -o tageumrechner.o

tageumrechner: tageumrechner.o
	gcc tageumrechner.o -o tageumrechner

clean:
	-rm -f tageumrechner.o
	-rm -f tageumrechner
