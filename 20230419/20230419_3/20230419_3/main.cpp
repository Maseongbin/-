// 20230419 / 미래모빌리티공학과 / 202315006 / 마성빈

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x, y, op;
    srand(time(NULL)); 

   
    x = rand() % 10;
    y = rand() % 10;

    
    op = rand() % 5;

    
    if (op == 0) 
    {
        printf("%d + %d = %d\n", x, y, x + y);
    }
    else if (op == 1) 
    {
        printf("%d - %d = %d\n", x, y, x - y);
    }
    else if (op == 2) 
    {
        printf("%d * %d = %d\n", x, y, x * y);
    }
    else if (op == 3) 
    {
        printf("%d / %d = %d\n", x, y, x / y);
    }
    else if (op == 4) 
    {
        printf("%d %% %d = %d\n", x, y, x % y);
    }

    return 0;
}