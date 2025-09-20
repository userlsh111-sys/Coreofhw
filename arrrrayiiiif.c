#include<stdio.h>
#define size 10

int main(void)
{
	char ans;
	int i, seat[size] = { 0 }, num;

	while (1) {
	start:
		printf("어서오세요, 즐거운 메가롯데입니다! 예약 도와드릴까요?\n");
		scanf(" %c", &ans); // 스칸프 공백


		if (ans == 'n' || ans == 'N' || ans == 'ㄴ') {
			printf("예약을 취소해드릴까요?\n");
			scanf(" %c", &ans);

			if (ans == 'y' || ans == 'Y' || ans == 'ㅇ') {

				printf("좌석을 골라주세요.\n좌석 번호: ");
				for (i = 0; i < size; i++) { printf("%d\t", i + 1); }
				printf("\n예약 여부: ");
				for (i = 0; i < size; i++) { printf("%d\t", seat[i]); }
				printf("\n선택: ");
				scanf("%d", &num);

				if (seat[num - 1] == 1) { // num은 인덱스보다 1 크다.
					seat[num - 1] = 0;
					printf("취소되었습니다.\n");
				}
				else if (seat[num - 1] == 0) {
					printf("예약된 자리가 아닙니다! 첫 화면으로 이동합니다.\n");
					goto start;
				}
			}
			else if (ans == 'n' || ans == 'N' || ans == 'ㄴ') {
				printf("넵, 좋은 하루 보내세요!\n");
				break;
				}
			else {
				break;
			}
			}
		
		else if (ans == 'y' || ans == 'Y' || ans == 'ㅇ') {
			printf("좌석을 골라주세요!\n");
		middle:
			printf("좌석 번호: ");
			for (i = 0; i < size; i++) { printf("%d\t", i + 1); }
			printf("\n가능 여부: ");
			for (i = 0; i < size; i++) { printf("%d\t", seat[i]); }
			printf("\n선택: ");
			scanf("%d", &num);
			if (seat[num - 1] == 0) {
				seat[num - 1] = 1;
				printf("예약이 완료되었습니다!\n");
			}
			else if (seat[num - 1] == 1) {
				printf("이미 예약된 자리입니다! 다른 자리를 선택해주세요!\n");
				goto middle;
			}
		}

		else {
			break;
		}
	}

		return 0;
}
