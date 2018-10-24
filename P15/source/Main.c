#include <stdio.h>
#include <stdlib.h>

int Max(int x, int y, int z);

int main(void)
{
	int num1, num2, num3;
	printf("Enter three integers:");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("Maximum is :%d\n", Max(num1, num2, num3));
	system("pause");
	return 0;
}

int Max(int x, int y, int z)
{
	int max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	return max;
}