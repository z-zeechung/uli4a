#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[20];
    
    // Test 1: Normal case
    memset(dest, 0, sizeof(dest));
    if (memccpy(dest, src, 'o', 10) != dest + 3) {
        printf("Test 1 failed\n");
        return 1;
    }
    if (strcmp(dest, "Hell") != 0) {
        printf("Test 1 failed (copy result)\n");
        return 1;
    }
    
    // Test 2: Edge case: finding the first occurrence of the character
    memset(dest, 0, sizeof(dest));
    if (memccpy(dest, src, 'o', 6) != dest + 4) {
        printf("Test 2 failed\n");
        return 1;
    }
    if (strcmp(dest, "Hello") != 0) {
        printf("Test 2 failed (copy result)\n");
        return 1;
    }
    
    // Test 3: Edge case: not finding the character
    memset(dest, 0, sizeof(dest));
    if (memccpy(dest, src, 'x', 13) != dest + 13) {
        printf("Test 3 failed\n");
        return 1;
    }
    if (strcmp(dest, "Hello, World!") != 0) {
        printf("Test 3 failed (copy result)\n");
        return 1;
    }
    
    // Test 4: Large case
    memset(dest, 0, sizeof(dest));
    if (memccpy(dest, src, 'o', sizeof(src) - 1) != dest + 8) {
        printf("Test 4 failed\n");
        return 1;
    }
    if (strcmp(dest, "Hello, World") != 0) {
        printf("Test 4 failed (copy result)\n");
        return 1;
    }
    
    return 0;
}