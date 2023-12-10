//���� Ž���� ���� Ž���� ���� Ƚ�� ��
#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;  //Ž�� ����� ���� �ε��� ��
	int last = len - 1; //Ž�� ����� ������ �ε��� ��
	int mid;
	int opCount = 0; //�� ������ Ƚ���� ���

	while (first <= last)
	{
		mid = (first + last) / 2; //Ž�� ����� �߾��� ã�´�.
		if (target == ar[mid]) //�߾ӿ� ����� ���� Ÿ���̸� 
		{
			return mid; //Ž�� �Ϸ�
		}
		else
		{
			if (target < ar[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
		opCount += 1; //�� ������ Ƚ�� 1����
	}
	printf("�� ���� Ƚ�� : %d\n", opCount); //Ž�� ���н� ���� Ƚ�� ���
	return -1;
}

int main(void)
{
	//��� ��Ҹ� 0���� �ʱ�ȭ
	//���� Ž���� �迭���� ���� Ƚ��.
	int arr1[500] = { 0, }; 
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };
	int idx;

	//�迭 arr1�� �������, ������� ���� ���� 1�� ã����� ���
	idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1); 
	if (idx == -1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε��� :  %d\n", idx);

	//�迭 arr2�� �������, ������� ���� ���� 2�� ã����� ���
	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
	if (idx == -1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε��� :  %d\n", idx);

	//�迭 arr3�� �������, ������� ���� ���� 3�� ã����� ���
	idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 3);
	if (idx == -1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε��� :  %d\n", idx);

	return 0;
}