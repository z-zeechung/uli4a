#include <stdio.h>
#include <string.h>

int test_memchr(const void *str, int c, size_t n) {
    if (str == NULL) {
        printf("memchr: NULL pointer not allowed\n");
        return 1; // ����1��ʾ����ʧ��
    }

    if (n == 0 || n > strlen((const char *)str)) {
        printf("memchr: Invalid length %zu\n", n);
        return 1; // ����1��ʾ����ʧ��
    }

    void *result = memchr(str, c, n);
    if (result == NULL) {
        printf("memchr failed to find '%c' in '%.20s' (n=%zu)\n", c, (char *)str, n);
        return 1; // ����1��ʾ����ʧ��
    } else {
        size_t offset = (size_t)((char *)result - (char *)str);
        printf("memchr found '%c' at offset %zu in '%.20s'\n", c, offset, (char *)str);
        return 0; // ����0��ʾ����ͨ��
    }
}

int main() {
    char large_str[100000];
    memset(large_str, 'a', sizeof(large_str));

    char str1[] = "Hello, world!";
    char str2[] = "1234567890";
    char str3[] = "abcdefghij";

    int result = 0; // ���ڱ�����Խ��

    // ���Կ�ָ��
    result = test_memchr(NULL, 'o', 12);
    if (result == 0) {
        return 1;
    }

    // ���� n Ϊ 0
    result = test_memchr(str1, 'o', 0);
    if (result == 0) {
        return 1;
    }

    // ���� n Ϊ���������ﲻ����memchr��
    printf("memchr: n cannot be negative\n");

    // ���ԷǷ��ַ�
    result = test_memchr(str1, 'z', 12); // ����һ�������ڵ��ַ�
    if (result == 0) {
        return 1;
    }

    // ���Դ��ģ����
    result = test_memchr(large_str, 'a', sizeof(large_str));
    if (result != 0) {
        return result;
    }

    // ���Բ����ַ����ַ�����ͷ
    result = test_memchr(str1, 'H', 12);
    if (result != 0) {
        return result;
    }

    // ���Բ����ַ������ַ�����
    result = test_memchr(str1, 'z', 12);
    if (result == 0) {
        return 1;
    }

    // ���Ե�n�����ַ�������ʱ
    result = test_memchr(str1, 'l', strlen(str1));
    if (result != 0) {
        return result;
    }

    // ���Ե��ַ�cǡ��λ���ַ���ĩβʱ
    result = test_memchr(str1, 'd', strlen(str1) - 1);
    if (result != 0) {
        return result;
    }

    return 0; // ������в��Զ�ͨ��������0
}