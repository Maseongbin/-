// 20230420 / �̷������Ƽ���а� / 202315006 / ������ 

#include <stdio.h>

int main() {
    int i, j, prime_number;

    printf("2���� 100������ �Ҽ�: ");

    
    for (i = 2; i <= 100; i++) {
        prime_number = 1;

        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                prime_number = 0;
                break;
            }
        }

        if (prime_number == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}






