#include<stdio.h>
#include<math.h>
#define year 3
#define month 8
int all(int meal[year][month]);
double average(int meal[year][month]);
void print(int meal[year][month]);

int main(void)
{
	int meal[year][month], i, j;

	for (i = 0; i < year; i++) {
		for (j = 0; j < month; j++) {
			if (j + 1 == 5 || j + 1 == 6) {
				meal[i][j] = (7400 + 3900) * 3 * 4.5;
			}
			else {
				meal[i][j] = 7400 * 3 * 4.5;
			}
		}
	}

	print(meal);
	printf("<재학(주 3일 유지 전제) 동안 식비>\n총합: %d원\n평균: %f원\n\n", all(meal), average(meal));



	return 0;
}




void print(int meal[year][month])
{
	int i, j;

	for (i = 0; i < year; i++) {
		printf("%d학년: ", i + 1);
		for (j = 0; j < month; j++) {
			printf("%06d원 ", meal[i][j]);
		}
		printf("\n");
	}
}

int all(int meal[year][month])
{
	int sum=0, y, m;

	for (y = 0; y < year; y++) {
		for (m = 0; m < month;m++) {
			sum += meal[y][m];
		}
	}

	return sum;
}

double average(int meal[year][month])
{
	double avg = (double) all(meal) / (year * month);

	return avg;
}
