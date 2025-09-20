#include <stdio.h>

int main(void)
{
	unsigned int a, b, c;

	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = 1; c <= 100; c++) {
				/*초기화는 필수니까 1로 해둠. 
				어차피 아래 조건에 안 맞으면 순식간에 무시됨.*/
				if ((a * a + b * b) == c * c)/*'조건'을 둬야 실행됨.*/ {
					printf("a=%d, b=%d, c=%d\n", a, b, c);
				}
			}
		}
	}
	
	return 0;
}
