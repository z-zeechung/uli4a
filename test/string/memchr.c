#include <stdio.h>
#include <string.h>

int test_memchr(const void *str, int c, size_t n) {
    if (str == NULL) {
        printf("memchr: NULL pointer not allowed\n");
        return 1; // 返回1表示测试失败
    }

    if (n == 0 || n > strlen((const char *)str)) {
        printf("memchr: Invalid length %zu\n", n);
        return 1; // 返回1表示测试失败
    }

    void *result = memchr(str, c, n);
    if (result == NULL) {
        printf("memchr failed to find '%c' in '%.20s' (n=%zu)\n", c, (char *)str, n);
        return 1; // 返回1表示测试失败
    } else {
        size_t offset = (size_t)((char *)result - (char *)str);
        printf("memchr found '%c' at offset %zu in '%.20s'\n", c, offset, (char *)str);
        return 0; // 返回0表示测试通过
    }
}

int main() {
    char large_str[100000];
    memset(large_str, 'a', sizeof(large_str));

    char str1[] = "Hello, world!";
    char str2[] = "1234567890";
    char str3[] = "abcdefghij";

    int result = 0; // 用于保存测试结果

    // 测试空指针
    result = test_memchr(NULL, 'o', 12);
    if (result == 0) {
        return 1;
    }

    // 测试 n 为 0
    result = test_memchr(str1, 'o', 0);
    if (result == 0) {
        return 1;
    }

    // 测试 n 为负数（这里不调用memchr）
    printf("memchr: n cannot be negative\n");

    // 测试非法字符
    result = test_memchr(str1, 'z', 12); // 查找一个不存在的字符
    if (result == 0) {
        return 1;
    }

    // 测试大规模数据
    result = test_memchr(large_str, 'a', sizeof(large_str));
    if (result != 0) {
        return result;
    }

    // 测试查找字符在字符串开头
    result = test_memchr(str1, 'H', 12);
    if (result != 0) {
        return result;
    }

    // 测试查找字符不在字符串中
    result = test_memchr(str1, 'z', 12);
    if (result == 0) {
        return 1;
    }

    // 测试当n等于字符串长度时
    result = test_memchr(str1, 'l', strlen(str1));
    if (result != 0) {
        return result;
    }

    // 测试当字符c恰好位于字符串末尾时
    result = test_memchr(str1, 'd', strlen(str1) - 1);
    if (result != 0) {
        return result;
    }

    return 0; // 如果所有测试都通过，返回0
}