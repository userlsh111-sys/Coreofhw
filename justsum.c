#include <stdio.h>

int main()
{
	int num, i, sum;
	scanf_s("%d", &num);

	sum = 0;
	for (i = 1; i <= num; i++)
		sum += i;

	printf("합계: %d\n", sum);

	return 0;
}
