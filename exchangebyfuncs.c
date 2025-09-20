#include <stdio.h>

void print_shall_you() {
	printf("\n================\n");
	printf("달러 환율 계산\n");
	printf("r: 현재 환율\n");
	printf("d: 달러->원화\n");
	printf("w: 원화->달러\n");
	printf("b: 프로그램 종료\n");
	printf("================\n");
}

double change_dollars(double r, double d) {
	return (r * d);
}
double change_won(double w, double r) {
	return (w / r);
}
//괄호에서 double로 선언된 변수를, 다시 하면 오류남.

int main(void)
{
	char dw; //d나 w를 저장할 또 다른 변수가 필요함.
	double r, d, w;

	while (1972) {
		print_shall_you();
		printf("환율 및 원하시는 업무: ");
		scanf("%lf %c", &r, &dw);
		if (dw == 'd') {
			printf("달러: ");
			scanf("%lf", &d);
			printf("원화: %f원\n", change_dollars(r, d));
		}
		else if (dw == 'w') {
			printf("원화: ");
			scanf("%lf", &w);
			printf("달러: %f달러\n", change_won(w, r));
		}
		else if (dw == 'b') {
			break;
		}
	}

	return 0;
}
