#define ArrayChar 0
#define ArrayString 1

#define ArrayShort 2
#define ArrayUnsignedShort 3
#define ArrayInt 4
#define ArrayUnsignedInt 5
#define ArrayLong 6
#define ArrayUnsignedLong 7
#define ArrayLongTwo 8
#define ArrayUnsignedLongTwo 9
#define ArrayFloat 10
#define ArrayDouble 11
#define ArrayLongDouble 12

struct content {
    char* value;
    int type;
};

typedef struct Array{
    size_t used;
    size_t size;
    struct content *arr;

    // Inserts numbers

    void(*insert)(struct Array *this, char* pointer, int type);
    
    void(*insertShort)(struct Array *this, short element);
    void(*insertUnsignedShort)(struct Array *this, unsigned short element);

    void(*insertInt)(struct Array *this, int element);
    void(*insertUnsignedInt)(struct Array *this, unsigned int element);

    void(*insertLong)(struct Array *this, long element);
    void(*insertUnsignedLong)(struct Array *this, unsigned long element);

    void(*insertLongTwo)(struct Array *this, long long element);
    void(*insertUnsignedLongTwo)(struct Array *this, unsigned long long element);

    void(*insertFloat)(struct Array *this, float element);
    void(*insertDouble)(struct Array *this, double element);
    void(*insertLongDouble)(struct Array *this, long double element);

    // Insert chars

    void(*insertChar)(struct Array *this, char element);
    void(*insertString)(struct Array *this, char *element); 
    // Logs
    void(*printAll)(struct Array *this);
    // Removes
    void(*pop)(struct Array *this);
    void(*free)(struct Array *this);
} Array;
