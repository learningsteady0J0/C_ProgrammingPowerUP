/*#include <stdio.h>

//������ 1����Ʈ �ѱ��� 2����Ʈ�� ǥ���� ���� �ѱ��� �����ҷ��� ���ڰ��õ� �Լ��� 2�� ȣ���ؾ���.
//��Ʈ���� �ѹ������θ� �����ϴٴ� �� ���.

int main(void)
{

	int ch1, ch2;  // fgetc�� ��Ʈ���� ��ȯ
	int num;
	int i;
	FILE * fp;

	fp = fopen("character.txt", "wt");

	while ((ch1 = getchar()) != '\n') { //�ѱ� �Է½ÿ��� ����.  

		fputc(ch1, fp);


	}

	puts("�Է��� �Ϸ�Ǿ����ϴ�");
	fclose(fp);
	fputs("����� ������ ������? ", stdout);
	scanf("%d", &num);
	fp = fopen("character.txt", "rt");


	for (i = 0; i < num * 2; i++)
	{
		ch1 = fgetc(fp);
		putchar(ch1);
	}
	fputs("����� �Ϸ�Ǿ����ϴ�", stdout);

	fclose(fp);
	return 0;

}*/