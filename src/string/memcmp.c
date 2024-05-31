#include <string.h>

int memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = s1, *p2 = s2;

    // 逐个字节比较
    for (size_t i = 0; i < n; i++) {
        if (p1[i] < p2[i]) {
            return -1;  // s1中的字节小于s2中的字节
        } else if (p1[i] > p2[i]) {
            return 1;  // s1中的字节大于s2中的字节
        }
        // 如果相等，则继续比较下一个字节
    }

    // 如果所有字节都相等，则返回0
    return 0;
}