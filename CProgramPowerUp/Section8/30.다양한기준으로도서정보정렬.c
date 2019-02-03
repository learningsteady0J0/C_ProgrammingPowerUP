/*#include <stdio.h>
#include <string.h>

정렬된 데이터 정보를 어떻게 관리할 것인지가 관건.
모델 1 -> 구조체 포인터 배열을 이용하여 원본데이터는 그대로 두고
주소값만 바꿔주면서 정렬한 데이터를 출력하는 방법.
원본을 직접 변경하면 부담이 많이 됨. Book구조체의 크기는 100바이트가 넘어가는데 더 커질 수 도있음
근데 포인터값으로 정렬하게되면 부담이 적음.

단점은 데이터가 다 입력이 되야 쓸 수 있다는 것 정도

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
		printf("%d번째 도서 정보 입력.\n", i + 1);
		fputs("도서 제목: ", stdout);
		gets(book_temp.title);
		fputs("출판사 명: ", stdout);
		gets(book_temp.pub);
		fputs("도서 가격: ", stdout);
		scanf("%d", &book_temp.price);
		getchar();
		
		num = InputBook(&book_temp);
		if (num == -1)
			printf("입력에 실패하였습니다 \n");
		else
			printf("%d번째 입력 완료.....\n\n", num);
	}

	InitSortList();
	
	while (1)
	{
		puts("정렬방식 선택.......");
		puts("1. 도서 제목 순, 2.출판사 순 3. 가격 순, 4. 종료");
		fputs("그대의 선택은? ", stdout);
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
		printf("%d번째 도서 정보 출력\n\n", i + 1);
		printf("도서 제목 : %s\n", book_ptr[i]->title);
		printf("출판사 명 : %s\n", book_ptr[i]->pub);
		printf("도서 가격 : %d\n\n", book_ptr[i]->price);
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