
// Inserts
void arrayInsert(Array *this, char* pointer, int type){
    if(this->used == this->size){
        this->size *= 2;
        this->arr = realloc(this->arr, this->size * sizeof(struct content));
    }
    this->arr[this->used].value = pointer;
    this->arr[this->used++].type = type;
}

void arrayInsertInt(Array *this, int element){
    char* pointer = malloc(sizeof(int));
    *pointer = element;
    arrayInsert(this, pointer, ArrayInt);
}

void arrayInsertChar(Array *this, char element){
    char* pointer = malloc(sizeof(char));
    *pointer = element;
    arrayInsert(this, pointer, ArrayChar);
}

void arrayInsertString(Array *this, char *string){
    char* pointer = malloc(sizeof(char) * sizeof(string));
    strcpy(pointer, string);
    arrayInsert(this, pointer, ArrayString);
}
