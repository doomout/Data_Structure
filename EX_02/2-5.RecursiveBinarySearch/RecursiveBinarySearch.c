//이진 탐색을 재귀로 구현
#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target)
{
	int mid;

	if (first > last)
		return -1; //-1은 탐색의 실패를 의미
	mid = (first + last) / 2;

	if (ar[mid] == target)
		return mid;  //탐색된 인덱스 값 반환
	else if (target < ar[mid])
		return BSearchRecur(ar, first, mid - 1, target);
	else 
		return BSearchRecur(ar, mid + 1, last, target);

	return -1;
}

int main(void)
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int)-1, 7); //7은 있음
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스 :  %d\n", idx);

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int)-1, 4); //4는 없다.
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스 :  %d\n", idx);

	return 0;
}