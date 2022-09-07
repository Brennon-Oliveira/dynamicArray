#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "ArrayStructs.h"

#include "commands/inserts.h"
#include "commands/prints.h"
#include "commands/removes.h"

// init

void initArray(Array *array, int initializeSize){
    array->arr = malloc(initializeSize * sizeof(struct content));
    array->size = initializeSize;
    array->used = 0;
    // Inserts
    array->insert = &arrayInsert;
    array->insertShort = &arrayInsertShort;
    array->insertUnsignedShort = &arrayInsertUnsignedShort;
    array->insertInt = &arrayInsertInt;
    array->insertUnsignedInt = &arrayInsertUnsignedInt;
    array->insertLong = &arrayInsertLong;
    array->insertUnsignedLong = &arrayInsertUnsignedLong;
    array->insertLongTwo = &arrayInsertLongTwo;
    array->insertUnsignedLongTwo = &arrayInsertUnsignedLongTwo;
    array->insertFloat = &arrayInsertFloat;
    array->insertDouble = &arrayInsertDouble;
    array->insertLongDouble = &arrayInsertLongDouble;

    array->insertChar = &arrayInsertChar;
    array->insertString = &arrayInsertString;
    // Prints
    array->printAll = &printArray;
    array->pop = &popArray;
    array->free = &freeArray;
}