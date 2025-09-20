#include<stdio.h>
#define recent 21
double rate(const char** president);

int main(void)
{
	const char* president;

	printf("%s 대통령 득표율: %.1f\n", president, rate(&president)); 
	// 함수를 호출하고, 문자열이니 & 붙임.

	return 0;
}

double rate(const char** president)
{
	int g;

	printf("Q: 몇 대의 대선?(17대까진 불가함.)\nA: ");
	scanf("%d", &g);

	if (g <= 17 || g > recent) {
		printf("님, 시간 여행자임?");
		exit(0);
	}

	double elect;

	switch (g) {
	case 18: *president = "박근혜"; elect = 51.6; break;
	case 19: *president = "문재인"; elect = 41.1; break;
	case 20: *president = "윤석열"; elect = 48.56; break;
	case 21: *president = "이재명"; elect = 49.42; break;
	}

	return elect;
}
