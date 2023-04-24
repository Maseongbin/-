// 20230420 / 미래모빌리티공학과 / 202315006 / 마성빈 

#include <stdio.h>

int main() {
    int i, j, prime_number;

    printf("2부터 100까지의 소수: ");

    
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






