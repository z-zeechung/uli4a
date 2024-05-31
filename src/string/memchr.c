# include <string.h>

void* uli4a_memchr(const void *s, int c, size_t n) {
    const unsigned char *p = s;
    do {
        if (*p == (unsigned char)c) // Cast the input character to unsigned char for comparison
            return (void*)p; // Return the pointer to the first occurrence
    } while (--n > 0 && ++p); // Increment pointer and decrement remaining bytes to check

    return NULL; // If not found, return NULL
}