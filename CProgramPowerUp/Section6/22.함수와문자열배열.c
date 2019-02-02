/*#include <stdio.h>
#include <string.h>
#define STR_SIZE 100

strlen함수는 문자열의 주소 값만 전달하면 해당 주소를 시작으로 저장된 문자열의 길이를 계산해 냄.

int CountChar(char str[], char ch) {
	int len = strlen(str);
	int i;
	int count = 0;

	for (i = 0; i < len; i++) {
		if (str[i] == ch) {
			count++;
		}
	}

	return count;
}

int main(void)
{
	char str[STR_SIZE];
	char ch;
	int count;

	fputs("대상 문자열 입력 : ", stdout);
	gets(str);

	fputs("세어 볼 문자 입력: ", stdout);
	ch = getchar();

	count = CountChar(str, ch);

	printf("%c의 개수 : %d", ch, count);

	return 0;
}*/