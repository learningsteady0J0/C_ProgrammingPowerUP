/*#include <stdio.h>
#include <string.h>
#define STR_SIZE 100

strlen�Լ��� ���ڿ��� �ּ� ���� �����ϸ� �ش� �ּҸ� �������� ����� ���ڿ��� ���̸� ����� ��.

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

	fputs("��� ���ڿ� �Է� : ", stdout);
	gets(str);

	fputs("���� �� ���� �Է�: ", stdout);
	ch = getchar();

	count = CountChar(str, ch);

	printf("%c�� ���� : %d", ch, count);

	return 0;
}*/