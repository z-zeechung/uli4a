#include <string.h>

int memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = s1, *p2 = s2;

    // ����ֽڱȽ�
    for (size_t i = 0; i < n; i++) {
        if (p1[i] < p2[i]) {
            return -1;  // s1�е��ֽ�С��s2�е��ֽ�
        } else if (p1[i] > p2[i]) {
            return 1;  // s1�е��ֽڴ���s2�е��ֽ�
        }
        // �����ȣ�������Ƚ���һ���ֽ�
    }

    // ��������ֽڶ���ȣ��򷵻�0
    return 0;
}