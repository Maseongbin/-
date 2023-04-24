// 20230424 / 미래모빌리티공학과 / 202315006 / 마성빈

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i, j;
    int a = 0, b = 1, c;

    
    printf("수열의 길이를 입력하시오: ");
    scanf("%d", &i);

    printf("피보나치 수열: ");

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