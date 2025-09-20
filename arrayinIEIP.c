#include <stdio.h>

int main(void)
{
	int i, a[10], b[10];

	for (i = 0; i < 10; i++) {
		a[i] = i + 1;
	}

	for (i = 0; i < 10; i++) {
		b[i] = a[9 - i];
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", b[i]);
	}

	return 0;
}
