# include <string.h>

void* uli4a_memccpy(void *restrict dest, const void *restrict src, int c, size_t n) {
    unsigned char *d = dest;
    const unsigned char *s = src;
    
    // 循环，直到复制了 n 个字节，或者找到了字符 c
    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];  // 复制字节
        if (s[i] == (unsigned char)c) {
            // 如果找到了字符 c，返回目标字符串中该字符的位置
            return d + i + 1;  // 返回下一个位置的指针（像标准库那样）
        }
    }
    
    // 如果复制了 n 个字节但没找到字符 c，返回 NULL
    return NULL;
}