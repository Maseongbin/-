//20230524 / �̷������Ƽ���а� / 202315006 / ������
//���޿� �ٴ� �ҵ漼�� ����ϴ� �Լ� get_tax(int income)�� �ۼ��ϰ� �׽�Ʈ�Ͽ�����. �ҵ� �� 1000�� �������� 8%�� �����ϰ� 1000�� ���� �Ѵ� �ҵ��� 10%�� �����Ѵٰ� ����. �ҵ� �߿��� 1000�� ���� �Ѵ� �κи� 10%�� ����ȴ�. ����ڷκ��� �ҵ��� �޾Ƽ� ������ ����ϴ� ���α׷��� �ۼ��϶�.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int get_tax(int income)
{
	int tax;

	if (income < 1000)
	{
		tax = income * 0.08;
	}
	else
	{
		tax = 1000 * 0.08 + (income - 1000) * 0.1;
	}
	return tax;
}

int main(void)
{
	int money,tax;

	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf("%d", &money);

	tax = get_tax(money);
	printf("�ҵ漼�� %d�����Դϴ�.", tax);

	return 0;
}