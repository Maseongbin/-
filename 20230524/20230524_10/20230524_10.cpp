//20230524 / 미래모빌리티공학과 / 202315006 / 마성빈
//10. 10에서 90까지의 정수를 무작위로 반환하는 함수 randint()를 작성하고 10번 호출하여보자.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int randint()
{
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", 10 + rand() % 81);
	}
	return 10 + rand() % 81;
}
int main(void)
{

	printf("%d", randint());
	
	return 0;
}