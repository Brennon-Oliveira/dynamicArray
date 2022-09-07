all:
	gcc dynamicArray.c -o dynamicArray.o
	./*.o
clear:
	rm *.o