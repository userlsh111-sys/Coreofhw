#include <stdio.h>

int max(int x, int y);
int min(int x, int y);

int main(void)
{
	int i = 1972, j = 1221;
	printf("max(%d, %d)=%d\n", i, j, max(i, j));
	printf("min(%d, %d)=%d\n", i, j, min(i, j));
}

int max(int x, int y)
{
	return x > y ? x : y;
}

int min(int x, int y)
{
	if (x > y)
		return y;
	else
		return x;
}
