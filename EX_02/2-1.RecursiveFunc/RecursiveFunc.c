//2-1. ����Լ� ����
#include	<stdio.h>

void Recursive(int num) 
{
	if (num <= 0) //��� Ż�� ����
		return;
	printf("��� �Լ� ��ȯ Ƚ�� - %d\n", num);
	Recursive(num - 1);
}

int main(void)
{
	Recursive(3);
	return 0;
}