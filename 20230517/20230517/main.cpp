#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
int get_integer(void)
{
	int n;
	do {
		printf("정수를 입력하시오: ");
		scanf("%d", &n);
	} while (n <= 1);

	return n;
}

int is_prime(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int n;
	n = get_integer();

	if (is_prime(n) == 1)
		printf("%d는 소수입니다.\n", n);
	else
	 	printf("%d는 소수가 아닙니다.\n", n);

	return 0;
}
*/

/*
int get_integer(void)
{
	int n;
	do {
		printf("정수를 입력하시오: ");
		scanf("%d", &n);
	} while (n <= 1);

	return n;
}

int is_prime(int n)
{
	for (int j = 1; j <= n; j++) 
	{
		for (int i = 2; i < j; j++)
		{
			if (j % i == 0)
				return 0;
		}
		return 1;
	}
}

int main(void)
{
	int n;
	n = get_integer();

	if (is_prime(n) == 1)
		printf("%d는 소수입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);

	return 0;
}
*/


int is_prime(int num) {
	if (num <= 1)
	{
		return 0;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int n;
	printf("n 값을 입력하세요: ");
	scanf("%d", &n);

	printf("1부터 %d까지의 소수: ", n);
	for (int i = 2; i <= n; i++) {
		if (is_prime(i))
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}






