#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int l, s, h;

	srand(time(NULL));
	l = rand() % 50;
	s = l + 1;

	do {
		printf("너의 답: ");
		scanf("%d", &h); 

		if (h > s) {
			printf("DOWN\n");
		}
		else if (h < s) {
			printf("UP\n");
		}
	} while (h != s); //do{}while은 '특정 조건에만' 반복돼서 편함.

	if (h == s) {
		printf("정답!");
	} //==를 자꾸 =로 쓴다.

	return 0;
}
