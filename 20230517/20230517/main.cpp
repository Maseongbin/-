#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
int get_integer(void)
{
	int n;
	do {
		printf("������ �Է��Ͻÿ�: ");
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
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
	 	printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);

	return 0;
}
*/

/*
int get_integer(void)
{
	int n;
	do {
		printf("������ �Է��Ͻÿ�: ");
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
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);

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
	printf("n ���� �Է��ϼ���: ");
	scanf("%d", &n);

	printf("1���� %d������ �Ҽ�: ", n);
	for (int i = 2; i <= n; i++) {
		if (is_prime(i))
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}






