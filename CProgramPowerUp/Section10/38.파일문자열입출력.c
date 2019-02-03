#include <stdio.h>

void AllPrint(FILE*fp1)
{
	int i;
	char str[100];
	for (i = 0; i < 5; i++)
	{
		fgets(str, sizeof(str), fp1);
		printf("%d ��° ���ڿ� : %s", i + 1, str);
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
		puts("���Ͽ�������");
		return -1;
	}

	for (i = 0; i < 5; i++) {
		printf("%d ��° ���ڿ� �Է� : ",i+1);
		fgets(str,sizeof(str),stdin);
		fputs(str, fp1);
		
	}
	
	fclose(fp1);

	fp2 = fopen("StringEx.txt", "rt");
	if (fp2 == NULL)
	{
		puts("���Ͽ�������");
	}

	fputs("����� ���ڿ� ���� �Է�(6�̻��� ��ü ���) : ",stdout);
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