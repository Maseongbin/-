// 20230419 / �̷������Ƽ���а� / 202315006 / ������

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int x, y, answer, i, op;
	srand(time(NULL));

	for (i = 0; i < 9; i++) {
		x  = rand() % 9;
		y  = rand() % 9;
		op = rand() % 5;

		printf("%d + %d = ", x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
	}


    

	return 0;
}