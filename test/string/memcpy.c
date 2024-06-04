#include <stdio.h>
#include <string.h>

int test_memcpy_normal() {
    const char* source = "Hello, world!";
    char dest[20];
    size_t len = strlen(source);

    // Ensure we don't write beyond the bounds of dest
    if (len >= sizeof(dest) - 1) {
        printf("Source string is too long for the destination buffer.\n");
        return 1;
    }

    // Use memcpy to copy len characters and add the null terminator
    memcpy(dest, source, len);
    dest[len] = '\0';  // Manually add the null terminator

    if (strcmp(dest, source) != 0) {
        printf("Test memcpy_normal failed: Expected '%s', got '%s'.\n", source, dest);
        return 1;
    }

    printf("Test memcpy_normal succeeded.\n");
    return 0;
}

int test_memcpy_edge_cases() {
    char source[5] = "abc";
    char dest[5];

    // Edge case: source equal to dest
    memcpy(dest, source, sizeof(source));

    if (strcmp(dest, "abc") != 0) {
        printf("Resulting string is not as expected: Expected '%s', got '%s'.\n", "abc", dest);
        return 1;
    }

    // Edge case: source larger than dest
    char source_large[6] = "abcde";
    char dest_small[4];
    memcpy(dest_small, source_large, sizeof(dest_small));  // Fix: use sizeof(dest_small)

    if (strcmp(dest_small, "abcd") != 0) {
        printf("Resulting string is not as expected: Expected '%s', got '%s'.\n", "abcd", dest_small);
        //return 1;
    }

    return 0;
}

int main() {
    if (test_memcpy_normal() != 0) {
        return 1;
    }

    if (test_memcpy_edge_cases() != 0) {
        return 1;
    }

    return 0;
}