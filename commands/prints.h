// print

void printArray(Array *this){
    int i, j;
    for(i = 0; i < this->used; i++){
        switch (this->arr[i].type)
        {
        case ArrayChar:
            printf("%c\n", *this->arr[i].value);
            break;
        case ArrayString:
            if(1){
                char *p = this->arr[i].value;
                for(j = 0; p[j] != '\0'; j++)
                    printf("%c",*(p+j));
                printf("\n");
            }
            break;
        case ArrayShort:
            printf("%hd\n", (short)*this->arr[i].value);
            break;
        case ArrayUnsignedShort:
            printf("%hu\n", (unsigned int)*this->arr[i].value);
            break;
        case ArrayInt:
            printf("%d\n", (int)*this->arr[i].value);
            break;
        case ArrayUnsignedInt:
            printf("%u\n", (unsigned int)*this->arr[i].value);
            break;
        case ArrayLong:
            printf("%ld\n", (long)*this->arr[i].value);
            break;
        case ArrayUnsignedLong:
            printf("%lu\n", (unsigned long)*this->arr[i].value);
            break;
        case ArrayLongTwo:
            printf("%lld\n", (long long)*this->arr[i].value);
            break;
        case ArrayUnsignedLongTwo:
            printf("%llu\n", (unsigned long long)*this->arr[i].value);
            break;
        case ArrayFloat:
            printf("%f\n", (float)*this->arr[i].value);
            break;
        case ArrayDouble:
            printf("%lf\n", (double)*this->arr[i].value);
            break;
        case ArrayLongDouble:
            printf("%Lf\n", (long double)*this->arr[i].value);
            break;
        default:
            break;
        }
    }
}