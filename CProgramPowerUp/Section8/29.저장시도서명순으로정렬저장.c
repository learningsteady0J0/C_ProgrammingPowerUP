/*#include <stdio.h>
#include <string.h>

//책에서는 책정보를 전역변수로 빼서 프로그램을 구성했다.
//나는 메인함수에서 선언한 변수를 이용하여 프로그램을 구성했다.  전역변수로 빼서 관리하는게 더 효율적인 것 같다.

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

	for (i = 0; i < BOOK_INFO_NUM; i++)
	{
		printf("%d번째 도서 정보 출력\n\n", i + 1);
		printf("도서 제목 : %s\n", book[i].title);
		printf("출판사 명 : %s\n", book[i].pub);
		printf("도서 가격 : %d\n\n", book[i].price);
	}

	

	return 0;
}*/