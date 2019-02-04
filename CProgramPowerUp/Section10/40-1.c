/*#include <stdio.h>
// fgetc의 인자는 int  기억할 것. char로 삽질했는데 int로 바꾸니 바로 됬음.
int main()
{
	int ch;
	FILE *fp1, *fp2;
	char str[500];
	scanf("%s", str);
	fp1 = fopen(str, "rb");
	fp2 = fopen("hihi.jpg", "wb");

	if (fp1 == NULL)
	{
		puts("파일열람실패");
		return -1;
	}

	while ((ch = fgetc(fp1)) != EOF)
		fputc(ch, fp2);

	puts("복사완료");

	return 0;
}*/