
//�˼��մϴ�. 20���� 21���� �ʹ� ������� Ǯ�� ���߽��ϴ�.





/*
//��������_19
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int n;          
    int count = 0; 

    printf("�ݺ� Ƚ��: ");
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

    printf("����= %f\n", pi);

    return 0;
}
*/





/*
//��������_18
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int n;
    double sum = 0.0;
    printf("���� ����: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("������ ��: %lf\n", sum);
    return 0;
}
*/






/*
//��������_17
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
        printf("\n������ �����Ͻÿ�: ");
        scanf("%c", &op);
        if (op == 'Q')
            break;
        printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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
//��������_16
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("������ �Է��Ͻÿ�: ");
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
//��������_15
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int n = 0, r = 0, i = 0, a = 1, b = 1, result = 1;
    printf("n�� ��: ");
    scanf("%d", &n);
    printf("r�� ��: ");
    scanf("%d", &r);
    for (i = 1; i <= (n - r - 1); i++)
    {
        result *= i;
    }
    printf("������ ���� %d�Դϴ�.\n", result);
    return 0;
}
*/





/*
//��������_14
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

    printf("���° �ױ��� ���ұ��? ");
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
//��������_13
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
    printf("1���� %d������ ���� %d�Դϴ�.\n", i - 1, sum - i);
    return 0;
}
*/




/*
//��������_12
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("������ ����(����: -1): ");
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
//��������_11
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
    printf("���翬�ᷮ: %d\n", a);

    while (1)
    {
        printf("���������� +, �Ҹ�� -�� �Է����ּ���: ");
        scanf(" %c%d", &action, &b);
        if (action == '+')
        {
            if (a + b > MAX_CAPACITY)
            {
                printf("�ִ� �뷮�� �ʰ��߽��ϴ�.\n");
            }
            else
            {
                a += b;
                printf("���� ���ᷮ: %d\n", a);
            }
        }
        else if (action == '-')
        {
            if (a - b < 0)
            {
                printf("���ᰡ �����մϴ�.\n");
            }
            else
            {
                a -= b;
                printf("���� ���ᷮ: %d\n", a);

                if (b < MIN_LEVEL)
                {
                    printf("(���) ���ᰡ %d���� �̸��Դϴ�.\n", MIN_LEVEL);
                }
            }
        }
        return 0;
    }
}
*/


//12�� ����
/*void main()
{
    int n;
    do
    {
        printf("������ ����(����: -1): ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    } while (n != -1);
}
















/*
//��������_10
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
//��������_09
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
int a, b, c, d, e;

printf("�ΰ��� ������ �Է��ϼ���: ");
scanf("%d %d", &a, &b);

for (c = 1; c <= a && c <= b; ++c)
{
    if (a % c == 0 && b % c == 0)
        d = c;
}
e = (a * b) / d;
printf("�ּ� ������� %d�Դϴ�.\n", e);

return 0;
}
*/




/*
//��������_08
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("������ �Է��ϼ���: ");
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
//��������_07
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
//��������_06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int n; 
    int i; 
    int sum = 0; 

    printf("n�� ���� �Է��ϼ���: ");
    scanf("%d", &n); 

    for (i = 1; i <= n; i++) 
    { 
        sum += i * i; 
    }

    printf("��갪�� %d�Դϴ�.",sum);

    return 0;
}
*/





/*
//��������_05
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    double r; 
    int n; 
    double result = 1.0; 

    printf("�Ǽ��� ���� �Է��Ͻÿ�:");
    scanf("%lf", &r);

    printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ�:");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) 
    { 
        result *= r; 
    }

    printf("������� %.6lf\n", result); 

    return 0;
}
*/





/*
//��������_04
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int num; 
    int i; 

    printf("������ �Է��ϼ���: ");
    scanf("%d", &num); 

    printf("%d�� ���: ", num);
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
//��������_03
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int num1, num2, num3; 
    int sum = 0; 

    printf("���ڸ� �Է��Ͻÿ�:");
    scanf("%d", &num1);

    printf("���ڸ� �Է��Ͻÿ�:");
    scanf("%d", &num2);

    printf("���ڸ� �Է��Ͻÿ�:");
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

    printf("�հ�� %d�Դϴ�.\n", sum); 

    return 0;
}
*/




/*
//��������_02
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

    printf("1���� 100������ ��� 3�� ��� ���� %d�Դϴ�.\n", sum); 

    return 0;
}
*/




/*
//��������_01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() 
{
    int num; 
    int i; 

    printf("������ �Է��ϼ���:");
    scanf("%d", &num);

    for (i = num; i >= 0; i--) { 
        printf("%d ", i); 
        Sleep(1000); 
    }
    return 0;
}
*/