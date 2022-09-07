// print

void printArray(Array *this){
    int i, j;
    for(i = 0; i < this->used; i++){
        if(this->arr[i].type == ArrayInt){
            printf("%d\n", *this->arr[i].value);
        } else if( this->arr[i].type == ArrayChar){
            printf("%c\n", *this->arr[i].value);
        } else if(this->arr[i].type == ArrayString){
            char *p = this->arr[i].value;
            for(j = 0; p[j] != '\0'; j++)
                printf("%c",*(p+j));
            printf("\n");
        }
    }
}