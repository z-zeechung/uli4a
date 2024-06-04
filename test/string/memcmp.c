#include <stdio.h>
#include <string.h>

int test_memcmp(const void *s1, const void *s2, size_t n) {
    return memcmp(s1, s2, n);
}

int main() {
    // 常规情况测试
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "world";
    int test1_result = test_memcmp(str1, str2, 5);
    int test2_result = test_memcmp(str1, str3, 5);

    if (test1_result != 0) {
        printf("Test 1: Failed.\n");
        return 1;
    }
    printf("Test 1: Passed.\n");
    if (test2_result == 0) {
        printf("Test 2: Failed (should not be equal).\n");
        return 1;
    }
    printf("Test 2: Passed.\n");
    // 边缘情况测试
    char str4[] = "hello";
    char str5[] = "hello";
    int test3_result = test_memcmp(str4, str5, 0);
    if (test3_result != 0) {
        printf("Test 3: Failed (zero-length comparison).\n");
        return 1;
    }
    printf("Test 3: Passed.\n");
    /*char str6[] = "hello";
    char *str7 = NULL;
    int test4_result = test_memcmp(str6, str7, 5);
    if (test4_result != 0) {
        printf("Test 4: Failed (NULL pointer).\n");
        return 1;
    }
    printf("Test 4: Passed.\n");*/
    // 大规模情况测试
    // 在这里，大规模情况可能意味着比较非常长的字符串，
    // 但由于内存限制，我们可能无法直接测试。
    // 为了模拟这一点，我们可以测试一个非常长的长度。
    char very_long_str1[1000];
    char very_long_str2[1000];
    memset(very_long_str1, 'a', 999);
    very_long_str1[999] = '\0';
    memset(very_long_str2, 'a', 999);
    very_long_str2[999] = '\0';
    int test5_result = test_memcmp(very_long_str1, very_long_str2, 999);
    if (test5_result != 0) {
        printf("Test 5: Failed (large strings).\n");
        return 1;
    }
    printf("Test 5: Passed.\n");
    // 非法访问情况测试
    /*int test6_result = test_memcmp(NULL, NULL, 5);
    if (test6_result != 0) {
        printf("Test 6: Failed (NULL pointer comparison).\n");
        return 1;
    }
    printf("Test 6: Passed.\n");*/

    return 0;
}