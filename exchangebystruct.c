#include<stdio.h>

struct dwrate
{
	double rate;
	int wons;
	double dollars;
};

int main(void)
{
	struct dwrate s;

	printf("현재 환율: ");
	scanf("%lf", &s.rate);

	printf("보유 원화: ");
	scanf("%d", &s.wons);

	s.dollars = s.wons / s.rate;
	printf("환산: %f달러\n", s.dollars);

	if (s.dollars >= 10000) {
		printf("So jealous.\n");
	}

	return 0;
}
