#define ArrayInt 0
#define ArrayChar 1
#define ArrayString 2
#define ArrayArray 3

struct content {
    char* value;
    int type;
};

typedef struct Array{
    size_t used;
    size_t size;
    struct content *arr;
    // Inserts
    void(*insert)(struct Array *this, char* pointer, int type);
    void(*insertInt)(struct Array *this, int element);
    void(*insertChar)(struct Array *this, char element);
    void(*insertString)(struct Array *this, char *element); 
    // Logs
    void(*printAll)(struct Array *this);
    // Removes
    void(*pop)(struct Array *this);
    void(*free)(struct Array *this);
} Array;
