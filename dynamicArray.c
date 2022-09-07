#include "Array.h"

int main()
{
    Array array;
    int i;

    initArray(&array, 5);

    array.insertInt(&array, 41);
    array.insertChar(&array, 'c');
    array.insertString(&array, "teste");
    array.insertString(&array, "abobora");
    array.insertInt(&array, 22);
    array.insertChar(&array, 't');
    array.insertDouble(&array, 4.23);
    array.insertString(&array, "brennon");

    array.pop(&array);

    array.printAll(&array);

    array.free(&array);
    return 0;
}


