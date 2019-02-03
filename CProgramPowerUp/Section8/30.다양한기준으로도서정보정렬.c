/*#include <stdio.h>
#include <string.h>

���ĵ� ������ ������ ��� ������ �������� ����.
�� 1 -> ����ü ������ �迭�� �̿��Ͽ� ���������ʹ� �״�� �ΰ�
�ּҰ��� �ٲ��ָ鼭 ������ �����͸� ����ϴ� ���.
������ ���� �����ϸ� �δ��� ���� ��. Book����ü�� ũ��� 100����Ʈ�� �Ѿ�µ� �� Ŀ�� �� ������
�ٵ� �����Ͱ����� �����ϰԵǸ� �δ��� ����.

������ �����Ͱ� �� �Է��� �Ǿ� �� �� �ִٴ� �� ����

#define STR_NUM 50
#define BOOK_INFO_NUM 3

typedef struct book {
	char title[STR_NUM];
	char pub[STR_NUM];
	int price;
}Book;

Book book[BOOK_INFO_NUM];
Book *book_ptr[BOOK_INFO_NUM];
int NumOfData = 0;

enum{SORT_TITLE=1,SORT_PUB,SORT_PRICE,EXIT};

int InputBook(Book * book_temp);

void InitSortList(void);
void PrintSortList(void);

void SortBookByTitle(void);
void SortBookByPub(void);
void SortBookByPrice(void);

int main()
{
	
	Book book_temp;
	int i  ,num,choice;

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

	InitSortList();
	
	while (1)
	{
		puts("���Ĺ�� ����.......");
		puts("1. ���� ���� ��, 2.���ǻ� �� 3. ���� ��, 4. ����");
		fputs("�״��� ������? ", stdout);
		scanf("%d", &choice);
		if (choice == SORT_TITLE)
			SortBookByTitle();
		else if (choice == SORT_PUB)
			SortBookByPub();
		else if (choice == SORT_PRICE)
			SortBookByPrice();
		else if (choice == EXIT)
			break;

		PrintSortList();


	}

	

	

	return 0;
}

int InputBook(Book * book_temp)
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

	for (idx = NumOfData; idx > inputIdx; idx--)
	{
		book[idx] = book[idx - 1];
	}

	book[idx] = *book_temp;
	

	return ++NumOfData;

}

void InitSortList(void) {
	int i;
	for (i = 0; i < BOOK_INFO_NUM; i++)
		book_ptr[i] = &book[i];
}
void PrintSortList(void) {
	int i;

	for (i = 0; i < BOOK_INFO_NUM; i++)
	{
		printf("%d��° ���� ���� ���\n\n", i + 1);
		printf("���� ���� : %s\n", book_ptr[i]->title);
		printf("���ǻ� �� : %s\n", book_ptr[i]->pub);
		printf("���� ���� : %d\n\n", book_ptr[i]->price);
	}
}

void SortBookByTitle(void)
{
	InitSortList();
}
void SortBookByPub(void)
{
	int i, j;
	Book * temp;


	for (i = 0; i < BOOK_INFO_NUM - 1; i++)
	{
		for (j = 0; j < (BOOK_INFO_NUM - 1) - i; j++)
		{
			if (strcmp(book_ptr[j]->pub, book_ptr[j + 1]->pub) > 0)
			{
				temp = book_ptr[j];
				book_ptr[j] = book_ptr[j + 1];
				book_ptr[j + 1] = temp;
			}
		}
	}
}
void SortBookByPrice(void) {
	int i, j;
	Book * temp;


	for (i = 0; i < BOOK_INFO_NUM - 1; i++)
	{
		for (j = 0; j < (BOOK_INFO_NUM - 1) - i; j++)
		{
			if (book_ptr[j]->price > book_ptr[j+1]->price)
			{
				temp = book_ptr[j];
				book_ptr[j] = book_ptr[j + 1];
				book_ptr[j + 1] = temp;
			}
		}
	}
}*/