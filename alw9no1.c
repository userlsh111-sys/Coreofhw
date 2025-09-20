#include <stdio.h>

int main(void)
{
	int s, h, lee; /*이름: 이승현(S. H. Lee)*/

	printf("두 정수: ");
	scanf("%d %d", &s, &h);

	if (s > h) {
		lee = ((double)(s - h + 1) / 2) * (2 * h + (s - h));
		printf("%d", lee);
	}
	if (s < h) {
		lee = ((double)(h - s + 1) / 2) * (2 * s + (h - s));
		printf("%d", lee);
	}
	if (s == h) {
		lee = s;
		printf("%d", lee);
	}
	/*등차수열의 합 공식*/

	return 0;
}
