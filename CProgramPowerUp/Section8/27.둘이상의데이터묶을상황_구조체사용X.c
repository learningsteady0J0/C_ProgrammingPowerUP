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
		printf("%d번째 도서 정보 입력.\n", i + 1);
		fputs("도서 제목: ", stdout);
		gets(str);
		book_title[i] = strdup(str);
		fputs("출판사 명: ", stdout);
		gets(str);
		book_pub[i] = strdup(str);
		fputs("도서 가격: ", stdout);
		scanf("%d", &price[i]);
		fflush(stdin);
	}

	for (i = 0; i < ARR; i++)
	{
		printf("%d번째 도서 정보 출력\n", i + 1);
		printf("도서 제목 : %s\n", book_title[i]);
		printf("출판사 명 : %s\n", book_pub[i]);
		printf("도서 가격 : %d\n", price[i]);
	}



}*/