/*#include <stdio.h>
// fgetc�� ���ڴ� int  ����� ��. char�� �����ߴµ� int�� �ٲٴ� �ٷ� ����.
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
		puts("���Ͽ�������");
		return -1;
	}

	while ((ch = fgetc(fp1)) != EOF)
		fputc(ch, fp2);

	puts("����Ϸ�");

	return 0;
}*/