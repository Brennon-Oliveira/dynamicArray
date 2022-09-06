#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#define ArrayInt 0
#define ArrayChar 1
#define ArrayString 2
#define ArrayArray 3

struct content {
    char* value;
    int type;
};

typedef struct {
    size_t used;
    size_t size;
    struct content *arr;
} Array;

void initArray(Array *array, int initializeSize){
    array->arr = malloc(initializeSize * sizeof(struct content));
    array->size = initializeSize;
    array->used = 0;
}

// Inserts
void arrayInsert(Array *array, char* pointer, int type){
    if(array->used == array->size){
        array->size *= 2;
        array->arr = realloc(array->arr, array->size * sizeof(struct content));
    }
    array->arr[array->used].value = pointer;
    array->arr[array->used++].type = type;
}

void arrayInsertInt(Array *array, int element){
    char* pointer = malloc(sizeof(int));
    *pointer = element;
    arrayInsert(array, pointer, ArrayInt);
}

void arrayInsertChar(Array *array, char element){
    char* pointer = malloc(sizeof(char));
    *pointer = element;
    arrayInsert(array, pointer, ArrayChar);
}

void arrayInserString(Array *array, char *string){
    char* pointer = malloc(sizeof(char) * sizeof(string));
    strcpy(pointer, string);
    arrayInsert(array, pointer, ArrayString);
}

void printArray(Array *array){
    int i, j;
    for(i = 0; i < array->used; i++){
        if(array->arr[i].type == ArrayInt){
            printf("%d\n", *array->arr[i].value);
        } else if( array->arr[i].type == ArrayChar){
            printf("%c\n", *array->arr[i].value);
        } else if(array->arr[i].type == ArrayString){
            char *p = array->arr[i].value;
            for(j = 0; p[j] != '\0'; j++)
                printf("%c",*(p+j));
            printf("\n");
        }
    }
}

void popArray(Array *array){
    int j;
    if(array->arr[array->used].type == ArrayString){
        char *p = array->arr[array->used].value;
        for(j = 0; p[j] != '\0'; j++)
            free(p+j);
    } else {
        free(array->arr[array->used].value);
    }
    array->arr[array->used--].value = NULL;
}

void freeArray(Array *array){
    free(array->arr);
    array->used = 0;
    array->size = 0;
}
