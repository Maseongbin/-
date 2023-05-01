
//죄송합니다. 20번과 21번은 너무 어려워서 풀지 못했습니다.





/*
//연습문제_19
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int n;          
    int count = 0; 

    printf("반복 횟수: ");
    scanf("%d", &n);

    srand(time(NULL));

    for (int i = 0; i < n; i++) 
    {
        double x = (double)rand() / RAND_MAX; 
        double y = (double)rand() / RAND_MAX;

        if (x * x + y * y < 1.0) 
        {   
            count++;
        }
    }

    double pi = 4.0 * count / n;  

    printf("파이= %f\n", pi);

    return 0;
}
*/





/*
//연습문제_18
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int n;
    double sum = 0.0;
    printf("항의 개수: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("수열의 합: %lf\n", sum);
    return 0;
}
*/






/*
//연습문제_17
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char op;
    int a, b;
    printf("**********");
    printf("\nA----Add");
    printf("\nS----Subtract");
    printf("\nM----Multiply");
    printf("\nD----Divide");
    printf("\nQ----Qutit");
    printf("\n**********");
    do
    {
        printf("\n연산을 선택하시오: ");
        scanf("%c", &op);
        if (op == 'Q')
            break;
        printf("두 수를 공백으로 분리하여 입력하시오: ");
        scanf("%d %d", &a, &b);
        if (op == 'A')
        {
            printf("\n%d\n", a + b);
            break;
        }
        else if (op == 'S')
        {
            printf("\n%d\n", a - b);
            break;
        }
        else if (op == 'M')
        {
            printf("\n%d\n", a * b);
            break;
        }
        else if (op == 'D')
        {
            printf("\n%d\n", a / b);
            break;
        }
    } while (1);
    return 0;
}
*/







/*
//연습문제_16
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("정수를 입력하시오: ");
    scanf("%d", &x);
    do
    {
        y = x % 10;
        x /= 10;
        printf("%d", y);
    } while (x != 0);
    return 0;
}
*/





/*
//연습문제_15
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int n = 0, r = 0, i = 0, a = 1, b = 1, result = 1;
    printf("n의 값: ");
    scanf("%d", &n);
    printf("r의 값: ");
    scanf("%d", &r);
    for (i = 1; i <= (n - r - 1); i++)
    {
        result *= i;
    }
    printf("순열의 값은 %d입니다.\n", result);
    return 0;
}
*/





/*
//연습문제_14
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 1;
    int c = 0;
    int d = 0;

    printf("몇번째 항까지 구할까요? ");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d, ", d);
        c = d + b;
        d = b;
        b = c;
    }
    return 0;
}
*/




/*
//연습문제_13
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 0;
    while (1)
    {
        sum += i;
        if (sum > 10000)
            break;
        i++;
    }
    printf("1부터 %d까지의 합이 %d입니다.\n", i - 1, sum - i);
    return 0;
}
*/




/*
//연습문제_12
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("막대의 높이(종료: -1): ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    } while (n != -1);
    return 0;
}
*/






/*
//연습문제_11
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define MAX_CAPACITY 500
#define MIN_LEVEL 20
#include <time.h>
#include <stdlib.h>

int main()
{
    int a = 100;
    char action;
    int b;
    printf("현재연료량: %d\n", a);

    while (1)
    {
        printf("연료충전은 +, 소모는 -로 입력해주세요: ");
        scanf(" %c%d", &action, &b);
        if (action == '+')
        {
            if (a + b > MAX_CAPACITY)
            {
                printf("최대 용량을 초과했습니다.\n");
            }
            else
            {
                a += b;
                printf("현재 연료량: %d\n", a);
            }
        }
        else if (action == '-')
        {
            if (a - b < 0)
            {
                printf("연료가 부족합니다.\n");
            }
            else
            {
                a -= b;
                printf("현재 연료량: %d\n", a);

                if (b < MIN_LEVEL)
                {
                    printf("(경고) 연료가 %d리터 미만입니다.\n", MIN_LEVEL);
                }
            }
        }
        return 0;
    }
}
*/


//12번 문제
/*void main()
{
    int n;
    do
    {
        printf("막대의 높이(종료: -1): ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    } while (n != -1);
}
















/*
//연습문제_10
#include <stdio.h>

int main() 
{
    int i, j;
    int prime_number;

    for (i = 2; i <= 100; i++)
    {
        prime_number = 1;

       
        for (j = 2; j < i; j++)
        {
            if (i % j == 0) 
            { 
                prime_number = 0;
                break; 
            }
        }

        if (prime_number)
        { 
            printf("%d ", i);
        }
    }

    return 0;
}
*/





/*
//연습문제_09
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
int a, b, c, d, e;

printf("두개의 정수를 입력하세요: ");
scanf("%d %d", &a, &b);

for (c = 1; c <= a && c <= b; ++c)
{
    if (a % c == 0 && b % c == 0)
        d = c;
}
e = (a * b) / d;
printf("최소 공배수는 %d입니다.\n", e);

return 0;
}
*/




/*
//연습문제_08
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    { 
        for (j = 1; j <= i; j++) 
        { 
            printf("%d ", j); 
        }
        printf("\n"); 
    }

    return 0;
}
*/



/*
//연습문제_07
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 7; i++) 
    { 
        for (j = 7; j >= 1; j--) 
        {
            if (j <= i) 
            { 
                printf("*");
            }
            else 
            { 
                printf(" ");
            }
        }
            printf("\n"); 
    }

    return 0;
}
*/



/*
//연습문제_06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int n; 
    int i; 
    int sum = 0; 

    printf("n의 값을 입력하세요: ");
    scanf("%d", &n); 

    for (i = 1; i <= n; i++) 
    { 
        sum += i * i; 
    }

    printf("계산값을 %d입니다.",sum);

    return 0;
}
*/





/*
//연습문제_05
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    double r; 
    int n; 
    double result = 1.0; 

    printf("실수의 값을 입력하시오:");
    scanf("%lf", &r);

    printf("거듭 제곱 횟수를 입력하시오:");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) 
    { 
        result *= r; 
    }

    printf("결과값은 %.6lf\n", result); 

    return 0;
}
*/





/*
//연습문제_04
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int num; 
    int i; 

    printf("정수를 입력하세요: ");
    scanf("%d", &num); 

    printf("%d의 약수: ", num);
    for (i = 1; i <= num; i++) 
    { 
        if (num % i == 0) 
        { 
            printf("%d ", i); 
        }
    }

    return 0;
}
*/




/*
//연습문제_03
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int num1, num2, num3; 
    int sum = 0; 

    printf("숫자를 입력하시오:");
    scanf("%d", &num1);

    printf("숫자를 입력하시오:");
    scanf("%d", &num2);

    printf("숫자를 입력하시오:");
    scanf("%d", &num3);


    if (num1 >= 0) 
    { 
        sum += num1; 
    }

    if (num2 >= 0) 
    { 
        sum += num2; 
    }

    if (num3 >= 0) 
    { 
        sum += num3; 
    }

    printf("합계는 %d입니다.\n", sum); 

    return 0;
}
*/




/*
//연습문제_02
#include <stdio.h>


int main() 
{
    int sum = 0; 
    int i; 

    for (i = 1; i <= 100; i++) { 
        if (i % 3 == 0) { 
            sum += i; 
        }
    }

    printf("1부터 100사이의 모든 3의 배수 합은 %d입니다.\n", sum); 

    return 0;
}
*/




/*
//연습문제_01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() 
{
    int num; 
    int i; 

    printf("변수를 입력하세요:");
    scanf("%d", &num);

    for (i = num; i >= 0; i--) { 
        printf("%d ", i); 
        Sleep(1000); 
    }
    return 0;
}
*/