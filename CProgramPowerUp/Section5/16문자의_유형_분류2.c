/*#include <stdio.h>
#include <string.h>

문자열을 출력할때 각 문자들을 배열에 담아서 하는방법과,
문자하나하나를 \n까지 출력하는 방법이 있다.

int main(void) {
	char str[256];
	char ch;
	int len;
	int diff;
	int i;
	fputs("문자열 입력: ", stdout);

	gets(str);

	len = strlen(str);


	diff = 'A' - 'a';

	for (i = 0; i < len; i++) {
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] += diff;
		else if ('A' <= str[i] && str[i] <= 'Z')
			str[i] -= diff;

	}

	puts(str);

	fputs("문자열 입력: ", stdout);

	while ((ch = getchar()) != '\n') {
		if ('a' <= ch && ch <= 'z') {
			ch += diff;

		}
		else if ('A' <= ch && ch <= 'Z') {
			ch -= diff;

		}
		putchar(ch);
	}



	return 0;
}*/