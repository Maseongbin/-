// 20230424 / 미래모빌리티공학과 / 202315006 / 마성빈


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i, j;

    
    printf("정수를 입력하세요: ");
    scanf("%d", &i);

    printf("%d의 약수: ", i);

    
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