/*#include <stdio.h>
#include <string.h>

구조체를 사용함과 사용안함에 차이는 배열선언하는 변수의 개수에있다.
모변수의 배열값이 오르면 그에 속하는 값들의 배열값도 오를시 구조체선언은 필수적이다!
책이란 모변수와  값  출판사 작가 가격 재고 등  책종류에 따라 관련된 변수들의 값도 같이 오르기때문 필수적임.

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
		printf("%d번째 도서 정보 입력.\n", i + 1);
		fputs("도서 제목: ", stdout);
		gets(book[i].bookTitle);
		fputs("출판사 명: ", stdout);
		gets(book[i].bookPub);
		fputs("도서 가격: ", stdout);
		scanf("%d", &book[i].bookPrice);
		getchar();
	}

	for (i = 0; i < ARR; i++)
	{
		printf("%d번째 도서 정보 출력\n", i + 1);
		printf("도서 제목 : %s\n", book[i].bookTitle);
		printf("출판사 명 : %s\n", book[i].bookPub);
		printf("도서 가격 : %d\n", book[i].bookPrice);
	}


}*/