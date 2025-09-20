#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 6 // 숫자놀이로 넓힐 수도.

int main(void)
{
	int i, freq[size] = { 0 }; // 배열도 초기화돼야.
	srand((unsigned)time(NULL));

	for (i = 0; i < 10000; i++) {
		++freq[rand() % size]; // 처음에 숫자가 뽑히니, 처음부터 1이 더해져야.
	}

	printf("숫자\t빈도\n");
	for (i = 0; i < size; i++) {
		printf("%d\t%d번\n", i+1, freq[i]);
	}

	return 0;
}
