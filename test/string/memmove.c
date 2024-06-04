#include <stdio.h>
#include <string.h>

int main() {
    // �������
    char src[] = "Hello, World!";
    char dest[20];
    if (memmove(dest, src, 13) == dest) {
        dest[13] = '\0';
        if (strcmp(dest, "Hello, World") == 0) {
            printf("����������Գɹ�.\n");
        } else {
            printf("�����������ʧ��.\n");
            return 1;
        }
    } else {
        printf("�����������ʧ�ܣ�memmove������NULL.\n");
        return 1;
    }

    // ��Ե�����Դ��Ŀ���ص�
    // ע�⣺memmove�����������ʵ����û���ƶ��κ����ݣ���Ϊ�����ܰ�ȫ���ƶ��ص����ڴ��
    char overlapSrc[20] = "Hello, World!";
    char overlapDest[20] = "1234567890123456";
    if (memmove(overlapDest, overlapSrc + 7, 5) == overlapDest) {
        if (strcmp(overlapDest, "56789") == 0) {
            printf("Դ��Ŀ���ص����Գɹ�.\n");
        } else {
            printf("Դ��Ŀ���ص�����ʧ��.\n");
            return 1;
        }
    } else {
        printf("Դ��Ŀ���ص�����ʧ�ܣ�memmove������NULL.\n");
        return 1;
    }

    // ���ģ�����ƶ�
    int largeSize = 1000000;
    char* largeSrc = (char*)malloc(largeSize + 1);
    char* largeDest = (char*)malloc(largeSize + 1);
    if (largeSrc == NULL || largeDest == NULL) {
        printf("�ڴ����ʧ��.\n");
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
            printf("���ģ�����ƶ����Գɹ�.\n");
        } else {
            printf("���ģ�����ƶ�����ʧ��.\n");
            return 1;
        }
    } else {
        printf("���ģ�����ƶ�����ʧ�ܣ�memmove������NULL.\n");
        return 1;
    }
    free(largeSrc);
    free(largeDest);

    return 0;
}