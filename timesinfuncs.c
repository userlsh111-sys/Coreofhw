#include<stdio.h>
#include<time.h>
#include<math.h>
void math(void);

int main(void)
{
	time_t present, future; // 둘 다 양수에, time이다.(다만 헷갈리니 정수로...)
	unsigned long between;

	present = time(NULL);
	printf("현재: %ld초\n\n", present); //time_t는 d만으론 모자름.(long 추가) 

	math();
	future = time(NULL);
	printf("함수 종료된 지금: %ld초\n", future);

	between = future - present;
	printf("프로그램 작동 시간: %ld초\n", future - present);

	if (between < 1) {
		printf("존내 빠르네...\n");
	}

	return 0;
}

void math(void)
{
	int result;
	double result2;
	
	result = pow(1972, 2); // pow는 double를 반환함. 
	result2 = sqrt(1221);

	printf("1972의 제곱=%d\n1221의 양의 제곱근=%f\n\n", result, result2);
}
