/*#include <stdio.h>
#include <string.h>

//å������ å������ ���������� ���� ���α׷��� �����ߴ�.
//���� �����Լ����� ������ ������ �̿��Ͽ� ���α׷��� �����ߴ�.  ���������� ���� �����ϴ°� �� ȿ������ �� ����.

#define STR_NUM 50
#define BOOK_INFO_NUM 3

typedef struct book {
	char title[STR_NUM];
	char pub[STR_NUM];
	int price;
}Book;

Book book[BOOK_INFO_NUM];
int NumOfData = 0;

int InputBook(Book * book_temp )
{
	int idx;
	int inputIdx = NumOfData;


	if (NumOfData >= BOOK_INFO_NUM)
		return -1;


	for (idx = 0; idx < NumOfData; idx++)
	{
		if (strcmp(book_temp->title, book[idx].title) < 0)
		{
			inputIdx = idx;
			break;
		}
	}

	for (idx = NumOfData ; idx > inputIdx; idx--)
	{
		book[idx] = book[idx - 1];
	}

	book[idx] = *book_temp;

	return ++NumOfData;

}

int main()
{
	
	Book book_temp;
	int i  ,num;

	for (i = 0; i < BOOK_INFO_NUM; i++)
	{
		printf("%d��° ���� ���� �Է�.\n", i + 1);
		fputs("���� ����: ", stdout);
		gets(book_temp.title);
		fputs("���ǻ� ��: ", stdout);
		gets(book_temp.pub);
		fputs("���� ����: ", stdout);
		scanf("%d", &book_temp.price);
		getchar();
		
		num = InputBook(&book_temp);
		if (num == -1)
			printf("�Է¿� �����Ͽ����ϴ� \n");
		else
			printf("%d��° �Է� �Ϸ�.....\n\n", num);
	}

	for (i = 0; i < BOOK_INFO_NUM; i++)
	{
		printf("%d��° ���� ���� ���\n\n", i + 1);
		printf("���� ���� : %s\n", book[i].title);
		printf("���ǻ� �� : %s\n", book[i].pub);
		printf("���� ���� : %d\n\n", book[i].price);
	}

	

	return 0;
}*/