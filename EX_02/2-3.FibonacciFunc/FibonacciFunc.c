//2-3. 재귀로 피보나치 구현
#include	<stdio.h>

int Fibo(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n-1) + Fibo(n-2);
}

int main(void)
{
	int i;
	for ( i = 1; i < 15; i++)
		printf("%d ", Fibo(i));

	return 0;
}