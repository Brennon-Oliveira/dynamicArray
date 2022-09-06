#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "Array.h"
#include Class struct

void teste(int test){
    printf("%d\n", test);
}

int main()
{
    // Array array;
    int i;

    initArray(&array, 5);

    arrayInsertInt(&array, 41);
    arrayInsertChar(&array, 'c');
    arrayInserString(&array, "teste");
    arrayInserString(&array, "abobora");
    arrayInsertInt(&array, 22);
    arrayInsertChar(&array, 't');
    arrayInserString(&array, "brennon");

    popArray(&array);

    arrayForEach(&array, )

    printArray(&array);

    freeArray(&array);
    return 0;
}


