#include<stdio.h>

struct first
{
	int num;
	char name[10];
	double point;
};

int main(void)
{
	struct first f1;
	// 태그 말고도 변수명이 필요하다.

	printf("정수: ");
	scanf("%d", &f1.num);

	printf("문자: ");
	scanf("%s", f1.name); 
	// 배열엔 & 안 붙지만, 요소엔 붙는다.
	// 문자열엔 s를 쓴다.
	// c 쓸 땐, 먼저 띄어쓴다.

	printf("실수: ");
	scanf("%lf", &f1.point);

	if (f1.num == 19721221) {
		printf("\n김두한은 쓰러졌다.\n");
	}
	if (f1.name[0]=='l' || f1.name[1] == 'e' || f1.name[2] == 'e') {
		printf("안녕 승현아.\n");
	}
	if (f1.point >= 3.5) {
		printf("넌 천재야!!!\n");
	}

	return 0;
}
