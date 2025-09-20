#include<stdio.h>

void minmax(int *max, int *min)
{
	int a[10], i;

	printf("띄어서 10개 입력: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	*max = *min = a[0];
	for (i = 0; i < 10; i++) {
		if (a[i] > *max) {
			*max = a[i];
		}
		if (a[i] < *min) {
			*min = a[i];
		}
	}
}
//여러 변수를 넘기려면 포인터(*)가 필요함.

int main(void)
{
	int max, min;
	minmax(&max, &min);

	printf("결과(최대, 소): %d, %d", max, min);

	return 0;
}
