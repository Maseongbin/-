// 20230419 / �̷������Ƽ���а� / 202315006 / ������

// �ҹ��ڸ� �빮�ڷ� �����Ѵ�.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{

	char letter;

	while (1)
	{

		printf("�ҹ��ڸ� �Է��Ͻÿ�:");
		scanf("%c", &letter);

		if (letter == 'Q')
			break;
		if (letter < 'a' || letter > 'z')
			continue;

		letter -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);

	}


	return 0;
}