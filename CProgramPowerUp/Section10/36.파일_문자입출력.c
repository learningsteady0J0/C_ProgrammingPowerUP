/*#include <stdio.h>

//영문은 1바이트 한글은 2바이트로 표현됨 따라서 한글을 저장할려면 문자관련된 함수를 2번 호출해야함.
//스트림은 한방향으로만 가능하다는 것 기억.

int main(void)
{

	int ch1, ch2;  // fgetc는 인트형을 반환
	int num;
	int i;
	FILE * fp;

	fp = fopen("character.txt", "wt");

	while ((ch1 = getchar()) != '\n') { //한글 입력시에도 가능.  

		fputc(ch1, fp);


	}

	puts("입력이 완료되었습니다");
	fclose(fp);
	fputs("출력할 문자의 개수는? ", stdout);
	scanf("%d", &num);
	fp = fopen("character.txt", "rt");


	for (i = 0; i < num * 2; i++)
	{
		ch1 = fgetc(fp);
		putchar(ch1);
	}
	fputs("출력이 완료되었습니다", stdout);

	fclose(fp);
	return 0;

}*/