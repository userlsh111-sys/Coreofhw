#include <stdio.h>

int main(void)
{
	int l[ 10 ], s, h, i = 0;

	printf("자연수 10개 입력: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &l[i]); //%d 10개보단 짧은 for문이 나음.
		printf("%d번째 요소: %d\n", i, l[i]);
	}

	if (l[0] > l[1]) {
		s = l[0], h = l[1];
	}
	else {
		s = l[1], h = l[0];
	}

	for (i = 2; i < 10; i++) {
		if (l[i] > s) {
			h = s; //이전 최대가 둘째(로 큰 수)에 대입돼야.
			s = l[i];
		}
		else if (l[i] > h && l[i] != s) {
			h = l[i];
		}
	}

	printf("\ns는 %d, h는 %d이다.\n", s, h);

	return 0;
}
