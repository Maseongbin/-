// 20230424 / �̷������Ƽ���а� / 202315006 / ������


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i, j;

    
    printf("������ �Է��ϼ���: ");
    scanf("%d", &i);

    printf("%d�� ���: ", i);

    
    for (j = 1; j <= i; j++) 
    {
        if (i % j == 0) 
        {
            printf("%d ", j);
        }
    }

    printf("\n");

    return 0;
}