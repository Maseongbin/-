//20230524 / �̷������Ƽ���а� / 202315006 / ������
//11. ����ڿ� ��ǻ�Ͱ� �ֻ��� ������ �Ѵٰ� ����. �ֻ����� �� 3���� ������ �ֻ��� ������ ���Ѵ�. ��ģ ������ ���� ���� �̱�ٰ� ����

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int dice, useful_dice = 0, computer_dice = 0;
	srand(time(NULL));

	printf("����� �ֻ���=");
	printf("(");
	for (int i = 0; i < 3; i++)
	{
		
		dice = 1 + rand() % 6;
		
		if (i < 2) {
			printf("%d, ", dice);
		}
		else {
			printf("%d", dice);
		}
		
		useful_dice +=  dice;
	}
	printf(")");
	printf("=%d\n", useful_dice);

	printf("��ǻ�� �ֻ���=");
	printf("(");
	for (int i = 0; i < 3; i++)
	{

		dice = 1 + rand() % 6;
		if (i < 2) {
			printf("%d, ", dice);
		}
		else {
			printf("%d", dice);
		}

		computer_dice += dice;
	}
	printf(")");
	printf("=%d\n", computer_dice);

	if (useful_dice > computer_dice)
	{
		printf("����� �¸�");
	}
	else if (useful_dice < computer_dice)
	{
		printf("��ǻ���� �¸�");
	}
}
