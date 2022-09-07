
// Inserts
void arrayInsert(Array *this, char* pointer, int type){
    if(this->used == this->size){
        this->size *= 2;
        this->arr = realloc(this->arr, this->size * sizeof(struct content));
    }
    this->arr[this->used].value = pointer;
    this->arr[this->used++].type = type;
}

/* Number types */

// Shorts

void arrayInsertShort(Array *this, short element){
    char* pointer = malloc(sizeof(short));
    *pointer = element;
    arrayInsert(this, pointer, ArrayShort);
}

void arrayInsertUnsignedShort(Array *this, unsigned short element){
    char* pointer = malloc(sizeof(unsigned short));
    *pointer = element;
    arrayInsert(this, pointer, ArrayUnsignedShort);
}

// Ints

void arrayInsertInt(Array *this, int element){
    char* pointer = malloc(sizeof(int));
    *pointer = element;
    arrayInsert(this, pointer, ArrayInt);
}

void arrayInsertUnsignedInt(Array *this, unsigned int element){
    char* pointer = malloc(sizeof(unsigned int));
    *pointer = element;
    arrayInsert(this, pointer, ArrayUnsignedInt);
}

// longs

void arrayInsertLong(Array *this, long element){
    char* pointer = malloc(sizeof(long));
    *pointer = element;
    arrayInsert(this, pointer, ArrayLong);
}

void arrayInsertUnsignedLong(Array *this, unsigned long element){
    char* pointer = malloc(sizeof(unsigned long));
    *pointer = element;
    arrayInsert(this, pointer, ArrayUnsignedLong);
}

// long longs

void arrayInsertLongTwo(Array *this, long long element){
    char* pointer = malloc(sizeof(long long));
    *pointer = element;
    arrayInsert(this, pointer, ArrayLongTwo);
}

void arrayInsertUnsignedLongTwo(Array *this, unsigned long long element){
    char* pointer = malloc(sizeof(unsigned long long));
    *pointer = element;
    arrayInsert(this, pointer, ArrayUnsignedLongTwo);
}

// floating-point

// floats

void arrayInsertFloat(Array *this, float element){
    char* pointer = malloc(sizeof(float));
    *pointer = element;
    arrayInsert(this, pointer, ArrayFloat);
}

// doubles

void arrayInsertDouble(Array *this, double element){
    char* pointer = malloc(sizeof(double));
    *pointer = element;
    arrayInsert(this, pointer, ArrayDouble);
}

void arrayInsertLongDouble(Array *this, long double element){
    char* pointer = malloc(sizeof(long double));
    *pointer = element;
    arrayInsert(this, pointer, ArrayLongDouble);
}

/* Char types */

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
