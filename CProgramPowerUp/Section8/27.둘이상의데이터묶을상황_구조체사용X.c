/*#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 50
#define ARR 3

int main()
{
	char str[CHAR_SIZE];
	char * book_title[ARR];
	char * book_pub[ARR];
	int price[ARR];
	int i;

	for (i = 0; i < ARR; i++)
	{
		printf("%d��° ���� ���� �Է�.\n", i + 1);
		fputs("���� ����: ", stdout);
		gets(str);
		book_title[i] = strdup(str);
		fputs("���ǻ� ��: ", stdout);
		gets(str);
		book_pub[i] = strdup(str);
		fputs("���� ����: ", stdout);
		scanf("%d", &price[i]);
		fflush(stdin);
	}

	for (i = 0; i < ARR; i++)
	{
		printf("%d��° ���� ���� ���\n", i + 1);
		printf("���� ���� : %s\n", book_title[i]);
		printf("���ǻ� �� : %s\n", book_pub[i]);
		printf("���� ���� : %d\n", price[i]);
	}



}*/