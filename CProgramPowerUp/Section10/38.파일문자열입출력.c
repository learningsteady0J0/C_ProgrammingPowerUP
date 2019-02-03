#include <stdio.h>

void AllPrint(FILE*fp1)
{
	int i;
	char str[100];
	for (i = 0; i < 5; i++)
	{
		fgets(str, sizeof(str), fp1);
		printf("%d 번째 문자열 : %s", i + 1, str);
	}
}

void PartPrint(FILE * fp1, int num)
{
	int i;
	char str[100];

	for (i = 0; i < num; i++)
	{
		fgets(str, sizeof(str), fp1);
		if (i == num - 1)
		{
			printf("%s", str);
		}
	}
}

int main(void)
{
	char str[100];
	int i , num;
	FILE * fp1, *fp2;

	fp1 = fopen("StringEx.txt", "wt");
	if (fp1 == NULL)
	{
		puts("파일열람실패");
		return -1;
	}

	for (i = 0; i < 5; i++) {
		printf("%d 번째 문자열 입력 : ",i+1);
		fgets(str,sizeof(str),stdin);
		fputs(str, fp1);
		
	}
	
	fclose(fp1);

	fp2 = fopen("StringEx.txt", "rt");
	if (fp2 == NULL)
	{
		puts("파일열람실패");
	}

	fputs("출력할 문자열 정보 입력(6이상은 전체 출력) : ",stdout);
	scanf("%d", &num);

	if (num > 5) {
		AllPrint(fp2);
	}
	else
	{
		PartPrint(fp2,num);
	}

	return 0;

}