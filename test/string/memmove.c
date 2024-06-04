#include <stdio.h>
#include <string.h>

int main() {
    // 常规情况
    char src[] = "Hello, World!";
    char dest[20];
    if (memmove(dest, src, 13) == dest) {
        dest[13] = '\0';
        if (strcmp(dest, "Hello, World") == 0) {
            printf("常规情况测试成功.\n");
        } else {
            printf("常规情况测试失败.\n");
            return 1;
        }
    } else {
        printf("常规情况测试失败，memmove返回了NULL.\n");
        return 1;
    }

    // 边缘情况：源和目标重叠
    // 注意：memmove在这种情况下实际上没有移动任何数据，因为它不能安全地移动重叠的内存块
    char overlapSrc[20] = "Hello, World!";
    char overlapDest[20] = "1234567890123456";
    if (memmove(overlapDest, overlapSrc + 7, 5) == overlapDest) {
        if (strcmp(overlapDest, "56789") == 0) {
            printf("源和目标重叠测试成功.\n");
        } else {
            printf("源和目标重叠测试失败.\n");
            return 1;
        }
    } else {
        printf("源和目标重叠测试失败，memmove返回了NULL.\n");
        return 1;
    }

    // 大规模数据移动
    int largeSize = 1000000;
    char* largeSrc = (char*)malloc(largeSize + 1);
    char* largeDest = (char*)malloc(largeSize + 1);
    if (largeSrc == NULL || largeDest == NULL) {
        printf("内存分配失败.\n");
        free(largeSrc);
        free(largeDest);
        return 1;
    }
    for (int i = 0; i < largeSize; i++) {
        largeSrc[i] = 'A';
    }
    largeSrc[largeSize] = '\0';
    if (memmove(largeDest, largeSrc, largeSize + 1) == largeDest) {
        if (strcmp(largeSrc, largeDest) == 0) {
            printf("大规模数据移动测试成功.\n");
        } else {
            printf("大规模数据移动测试失败.\n");
            return 1;
        }
    } else {
        printf("大规模数据移动测试失败，memmove返回了NULL.\n");
        return 1;
    }
    free(largeSrc);
    free(largeDest);

    return 0;
}