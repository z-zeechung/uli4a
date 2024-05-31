# include <string.h>

void* uli4a_memccpy(void *restrict dest, const void *restrict src, int c, size_t n) {
    unsigned char *d = dest;
    const unsigned char *s = src;
    
    // ѭ����ֱ�������� n ���ֽڣ������ҵ����ַ� c
    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];  // �����ֽ�
        if (s[i] == (unsigned char)c) {
            // ����ҵ����ַ� c������Ŀ���ַ����и��ַ���λ��
            return d + i + 1;  // ������һ��λ�õ�ָ�루���׼��������
        }
    }
    
    // ��������� n ���ֽڵ�û�ҵ��ַ� c������ NULL
    return NULL;
}