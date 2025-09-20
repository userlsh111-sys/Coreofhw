#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 5; i++)
		printf("%d ", rand()%100);
	return 0;
}
