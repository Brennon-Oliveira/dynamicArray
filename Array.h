#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "ArrayStructs.h"

#include "commands/inserts.h"
#include "commands/print.h"
#include "commands/remove.h"

// init

void initArray(Array *array, int initializeSize){
    array->arr = malloc(initializeSize * sizeof(struct content));
    array->size = initializeSize;
    array->used = 0;
    array->insert = &arrayInsert;
    array->insertInt = &arrayInsertInt;
    array->insertChar = &arrayInsertChar;
    array->insertString = &arrayInsertString;
    array->printAll = &printArray;
    array->pop = &popArray;
    array->free = &freeArray;
}