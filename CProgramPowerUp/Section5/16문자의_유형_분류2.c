/*#include <stdio.h>
#include <string.h>

���ڿ��� ����Ҷ� �� ���ڵ��� �迭�� ��Ƽ� �ϴ¹����,
�����ϳ��ϳ��� \n���� ����ϴ� ����� �ִ�.

int main(void) {
	char str[256];
	char ch;
	int len;
	int diff;
	int i;
	fputs("���ڿ� �Է�: ", stdout);

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

	fputs("���ڿ� �Է�: ", stdout);

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