//2-1. Àç±ÍÇÔ¼ö ¿¹Á¦
#include	<stdio.h>

void Recursive(int num) 
{
	if (num <= 0) //Àç±Í Å»Ãâ Á¶°Ç
		return;
	printf("Àç±Í ÇÔ¼ö ¼ÒÈ¯ È½¼ö - %d\n", num);
	Recursive(num - 1);
}

int main(void)
{
	Recursive(3);
	return 0;
}