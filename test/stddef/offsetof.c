#include <stddef.h>
#include <stdio.h>

void *memset(void *str, int c, size_t n) {
    unsigned char *p = str;
    while (n--) {
        *p++ = (unsigned char)c;
    }
    return str;
}

// Define a structure with various types of members
typedef struct {
    char c;
    short s;
    int i;
    long l;
    // Add more types if needed, avoiding floating-point types for endianness independence
} TestStruct;

// Define a union that contains the test structure and a character array
typedef union {
    TestStruct ts;
    unsigned char bytes[sizeof(TestStruct)];
} TestUnion;

int main() {

    TestUnion tu;
    memset(&tu, 0, sizeof(TestUnion));  // Initialize the union to all zeros

    // Set some values in the structure members (using all 1s for simplicity)
    tu.ts.c = 0xFF;
    tu.ts.s = 0xFFFF;
    tu.ts.i = 0xFFFFFFFF;
    //tu.ts.l = 0xFFFFFFFFFFFFFFFFL;  // Assuming long is 64-bit, adjust if necessary

    // Test offsetof for each member and compare with direct access
    printf("offsetof(TestStruct, c) = %zu, actual offset = %zu\n",
           offsetof(TestStruct, c), (size_t)&tu.ts.c - (size_t)&tu.ts);
    if (offsetof(TestStruct, c) != ((size_t)&tu.ts.c - (size_t)&tu.ts)) {
        printf("Test failed for 'c'.\n");
        return 1;
    } else {
        //printf("Test passed for 'c'.\n");
    }

    printf("offsetof(TestStruct, s) = %zu, actual offset = %zu\n",
           offsetof(TestStruct, s), (size_t)&tu.ts.s - (size_t)&tu.ts);
    if (offsetof(TestStruct, s) != ((size_t)&tu.ts.s - (size_t)&tu.ts)) {
        printf("Test failed for 's'.\n");
        return 1;
    } else {
        //printf("Test passed for 's'.\n");
    }

    printf("offsetof(TestStruct, i) = %zu, actual offset = %zu\n",
           offsetof(TestStruct, i), (size_t)&tu.ts.i - (size_t)&tu.ts);
    if (offsetof(TestStruct, i) != ((size_t)&tu.ts.i - (size_t)&tu.ts)) {
        printf("Test failed for 'i'.\n");
        return 1;
    } else {
        //printf("Test passed for 'i'.\n");
    }

    /*printf("offsetof(TestStruct, l) = %zu, actual offset = %zu\n",
           offsetof(TestStruct, l), (size_t)&tu.ts.l - (size_t)&tu.ts);
    if (offsetof(TestStruct, l) != ((size_t)&tu.ts.l - (size_t)&tu.ts)) {
        printf("Test failed for 'l'.\n");
    } else {
        printf("Test passed for 'l'.\n");
    }*/

    // Additional tests can be added here for other members

    return 0;
}