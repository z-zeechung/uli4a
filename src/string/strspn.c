/* * * * * * * * * * * *

	from musl

 * * * * * * * * * * * */

# include <string.h>

#define BITOP_SET(a, b) do { \
    size_t index = (size_t)(b) / (8 * sizeof(*(a))); \
    size_t bit = (size_t)1 << ((size_t)(b) % (8 * sizeof(*(a)))); \
    (a)[index] |= bit; \
} while (0)

#define BITOP_TEST(a, b) ({ \
    size_t index = (size_t)(b) / (8 * sizeof(*(a))); \
    size_t bit = (size_t)1 << ((size_t)(b) % (8 * sizeof(*(a)))); \
    ((a)[index] & bit) != 0; \
})

size_t strspn(const char *s, const char *c) {
    const char *a = s; // Save the original pointer for later calculation of the span length
    size_t byteset[32 / sizeof(size_t)] = {0}; // Assume ASCII, hence 32 bytes are enough for a bitset

    if (!*c) return 0; // If c is an empty string, return 0 immediately
    if (!c[1]) { // If c contains only one character
        // Optimize by using a simple loop instead of bitmaps
        for (; *s == *c; s++);
        return s - a; // Return the span length
    }

    // Populate the byteset bitmap with characters present in c
    for (; *c; c++) {
        BITOP_SET(byteset, *(const unsigned char *)c); // Ensure unsigned conversion for bitwise operations
    }

    // Iterate over s until a character not present in c is encountered
    for (; *s && BITOP_TEST(byteset, *(const unsigned char *)s); s++);

    return s - a; // Return the span length
}
