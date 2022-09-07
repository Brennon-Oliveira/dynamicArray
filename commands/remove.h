// Removes

void popArray(Array *this){
    int j;
    if(this->arr[this->used].type == ArrayString){
        char *p = this->arr[this->used].value;
        for(j = 0; p[j] != '\0'; j++)
            free(p+j);
    } else {
        free(this->arr[this->used].value);
    }
    this->arr[this->used--].value = NULL;
}

void freeArray(Array *this){
    free(this->arr);
    this->used = 0;
    this->size = 0;
}