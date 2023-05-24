//20230524 / 미래모빌리티공학과 / 202315006 / 마성빈
//11. 사용자와 컴퓨터가 주사위 게임을 한다고 하자. 주사위를 각 3번씩 굴려서 주사위 점수를 합한다. 합친 점수가 노은 쪽이 이긴다고 하자

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int dice, useful_dice = 0, computer_dice = 0;
	srand(time(NULL));

	printf("사용자 주사위=");
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

	printf("컴퓨터 주사위=");
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
		printf("사용자 승리");
	}
	else if (useful_dice < computer_dice)
	{
		printf("컴퓨터의 승리");
	}
}
