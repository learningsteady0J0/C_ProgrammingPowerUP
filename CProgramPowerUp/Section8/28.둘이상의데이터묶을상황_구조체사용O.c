/*#include <stdio.h>
#include <string.h>

����ü�� ����԰� �����Կ� ���̴� �迭�����ϴ� ������ �������ִ�.
�𺯼��� �迭���� ������ �׿� ���ϴ� ������ �迭���� ������ ����ü������ �ʼ����̴�!
å�̶� �𺯼���  ��  ���ǻ� �۰� ���� ��� ��  å������ ���� ���õ� �������� ���� ���� �����⶧�� �ʼ�����.

#define STR_LEN 50
#define ARR 3
typedef struct __bookinfo
{
	char bookTitle[STR_LEN];
	char bookPub[STR_LEN];
	int bookPrice;
}bookinfo;

int main()
{
	bookinfo book[ARR];
	int i;

	for (i = 0; i < ARR; i++)
	{
		printf("%d��° ���� ���� �Է�.\n", i + 1);
		fputs("���� ����: ", stdout);
		gets(book[i].bookTitle);
		fputs("���ǻ� ��: ", stdout);
		gets(book[i].bookPub);
		fputs("���� ����: ", stdout);
		scanf("%d", &book[i].bookPrice);
		getchar();
	}

	for (i = 0; i < ARR; i++)
	{
		printf("%d��° ���� ���� ���\n", i + 1);
		printf("���� ���� : %s\n", book[i].bookTitle);
		printf("���ǻ� �� : %s\n", book[i].bookPub);
		printf("���� ���� : %d\n", book[i].bookPrice);
	}


}*/