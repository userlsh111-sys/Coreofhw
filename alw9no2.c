#include <stdio.h>

int main(void)
{
	char s, h;

	printf("두 문자(알파벳만 입력할 것.): ");
	scanf("%c %c", &s, &h); 

	if (s >= 'A' && s <= 'Z')
		printf("%c는 대문자\n", s);
	if (s >= 'a' && s <= 'z')
		printf("%c는 소문자\n", s);

	if (h >= 'A' && h <= 'Z')
		printf("%c는 대문자\n", h);
	if (h >= 'a' && h <= 'z')
		printf("%c는 소문자\n", h);

	return 0;}
