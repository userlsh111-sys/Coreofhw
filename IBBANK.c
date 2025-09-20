#include<stdio.h>
#define size 100

int menu();
void make(int using[size], int number[size], int password[size], int balance[size], int *num, int *pass);
void deposit(int using[size], int balance[size], int *num);
void withdrawal(int using[size], int password[size], int balance[size], int* num, int* pass);
void check_money(int using[size], int password[size], int balance[size], int* num, int* pass);
int check_using(int using[size], int *num);
int identify(int using[size], int password[size], int *num, int *pass);


int main(void)
{
	int i;
	int choice;
	int using[size] = {0};
	int number[size], num;
	for (i = 0; i < size; i++) {number[i] = i + 1;}
	int password[size], pass;
	int balance[size] = {0}, depo, with;

	
	while (1) {
		choice = menu();

		switch (choice) {
		case 1:
			make(using, number, password, balance, &num, &pass);
			break;
		case 2:
			deposit(using, balance, &num);
			break;
		case 3:
			withdrawal(using, password, balance, &num, &pass);
			break;
		case 4:
			check_money(using, password, balance, &num, &pass);
			break;
		default:
			exit(0);
		}
	}

	return 0;
}








int menu()
{
	int choice;

	printf("====고객을 정성껏 모시는 IB인민뱅킹입니다!====\n");
	printf("1. 계좌(개설)\t2. 입금\t3. 출금\t4. 잔금(조회)\n");
	printf("종료를 원하시면 1~4 외 아무 키나 눌러주세요!\n선택: ");
	scanf("%d", &choice);

	return choice;
}

void make(int using[size], int number[size], int password[size], int balance[size], int *num, int *pass)
{
	int i; 

	printf("0은 사용 중, 1은 미사용입니다!\n");
	for (i = 0; i < size; i++) {
		number[i] = i + 1;
		printf("%d(%d) ", number[i], using[i]);
	}
	make_start:
	printf("\n원하시는 계좌(번호): ");
	check_using(using, num);
	if (using[*num - 1] == 1) {
		goto make_start;
	}

	printf("비밀번호(숫자 6자리) 등록: ");
	scanf("%d", pass);
	password[*num - 1] = *pass;
	using[*num - 1] = 1;

	printf("%d번 계좌가 개설되었습니다! 감사합니다!\n", *num);
}

void deposit(int using[size], int balance[size], int *num)
{
	int depo;

	printf("입금하실 계좌(번호) 입력: ");
	check_using(using, num);
	printf("입금하실 금액: ");
	scanf("%d", &depo);
	balance[*num - 1] += depo;
	printf("입금: %d원\t\t현재 잔액: %d원\n이용해주셔서 감사합니다!\n", depo, balance[*num - 1]);
}

void withdrawal(int using[size], int password[size], int balance[size], int *num, int *pass)
{
	int with;
	
	printf("출금하실 계좌(번호) 입력: ");
	identify(using, password, num, pass);
	withdrawal_start:
	printf("출금하실 금액: ");
	scanf("%d", &with);
	balance[*num - 1] -= with;
	if (balance[*num - 1] < 0) {
		printf("IB인민은행은 마이너스 통장을 취급하지 않습니다.\n");
		balance[*num - 1] += with;
		goto withdrawal_start;
	}
	else if (with > 1000000) {
		printf("한도제한: 1000000\n");
		balance[*num - 1] += with;
		goto withdrawal_start;
	}

	printf("출금: %d원\t\t현재 잔액: %d원\n이용해주셔서 감사합니다!\n", with, balance[*num - 1]);
}

void check_money(int using[size], int password[size], int balance[size], int *num, int *pass)
{
	printf("확인하실 계좌(번호) 입력: ");
	identify(using, password, num, pass);
	printf("잔금: %d원\n", balance[*num - 1]);
}




int check_using(int using[size], int *num)
{

	scanf("%d", num);
	if (*num > 100 || *num < 1) {
		printf("잘못된 수입니다! 프로그램을 다시 시작해주세요!\n");
		exit(0);
	}

	if (using[*num - 1] == 0) {
		printf("%d번은 미사용 중입니다.\n", *num);
	}
	else {
		printf("%d번은 사용 계좌입니다.\n", *num);
	}

	return;
}

int identify(int using[size], int password[size], int *num, int *pass)
{
	scanf("%d", num);
	if (*num > 100 || *num < 1) {
		printf("잘못된 수입니다! 프로그램을 다시 시작해주세요!\n");
		exit(0);
	}

	printf("비밀번호: ");
	scanf("%d", pass);
	if (using[*num - 1] == 1 && password[*num - 1] == *pass) {
		printf("인증되었습니다!\n");
		return;
	}
	else {
		printf("인증에 실패해, 프로그램을 종료합니다!\n");
		exit(0);
	}
}
