//20230524 / �̷������Ƽ���а� / 202315006 / ������
//04. ���޵� ���ڰ� ���ĺ� �������� �ƴ����� �˻��ϴ� �Լ� check_alpha(char c)�� �ۼ��ϰ� �̰��� ȣ���Ͽ��� ����ڰ� �Է��� ���ڰ� ���ĺ�('a'���� 'z'����)������ �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int check_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	char a;
	
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &a);	


	if (a)
	{
		printf("%c�� ���ĺ� �����Դϴ�.\n", a);
	}
	else
	{
		printf("���ĺ��� �ƴմϴ�.\n");
	}
	return 0;
}