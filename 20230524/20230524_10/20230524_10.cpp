//20230524 / �̷������Ƽ���а� / 202315006 / ������
//10. 10���� 90������ ������ �������� ��ȯ�ϴ� �Լ� randint()�� �ۼ��ϰ� 10�� ȣ���Ͽ�����.

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