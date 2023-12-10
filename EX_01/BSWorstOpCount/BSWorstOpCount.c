//순차 탐색과 이진 탐색의 연산 횟수 비교
#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;  //탐색 대상의 시작 인덱스 값
	int last = len - 1; //탐색 대상의 마지막 인덱스 값
	int mid;
	int opCount = 0; //비교 연산의 횟수를 기록

	while (first <= last)
	{
		mid = (first + last) / 2; //탐색 대상의 중앙을 찾는다.
		if (target == ar[mid]) //중앙에 저장된 것이 타겟이면 
		{
			return mid; //탐색 완료
		}
		else
		{
			if (target < ar[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
		opCount += 1; //비교 연산의 횟수 1증가
	}
	printf("비교 연산 횟수 : %d\n", opCount); //탐색 실패시 연산 횟수 출력
	return -1;
}

int main(void)
{
	//모든 요소를 0으로 초기화
	//순차 탐색은 배열수가 연산 횟수.
	int arr1[500] = { 0, }; 
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };
	int idx;

	//배열 arr1을 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
	idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1); 
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스 :  %d\n", idx);

	//배열 arr2을 대상으로, 저장되지 않은 정수 2을 찾으라고 명령
	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스 :  %d\n", idx);

	//배열 arr3을 대상으로, 저장되지 않은 정수 3을 찾으라고 명령
	idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 3);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스 :  %d\n", idx);

	return 0;
}