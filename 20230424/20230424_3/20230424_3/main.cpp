// 20230424 / �̷������Ƽ���а� / 202315006 / ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i, j;
    int a = 0, b = 1, c;

    
    printf("������ ���̸� �Է��Ͻÿ�: ");
    scanf("%d", &i);

    printf("�Ǻ���ġ ����: ");

    printf("%d %d ", a, b);
    for (j = 2; j < i; j++) 
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}