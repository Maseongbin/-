// 20230419 / 미래모빌리티공학과 / 202315006 / 마성빈

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
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
	}


    

	return 0;
}