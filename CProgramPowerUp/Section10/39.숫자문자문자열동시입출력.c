/*#include <stdio.h>
#include <string.h>
#define STR_SIZE 100
//fgets�� \n�� ���Եȴ�.  �׸��� fputs �Լ��� ������ �������� �б⶧���� �Է��Ҷ� ������ ���� �ԷµǸ� �׵ڱ��� ��� �����ؼ� fputs�Լ��� ������.
//feof �Լ��� ������ ��(EOF)�� �������� �� 0�� �ƴ� ���� ��ȯ.. ���⼭ ������ ���� �������������� ��ġ���ƴ�. ������ ������ ��
// �� ���� �����͸� �������� �õ��� �� EOF�� ��ȯ��.. ���� �������� fread�Լ��ڿ� feof�Լ��� ����.
//sprintf�Լ��� Ȱ���� �� ��������.
int main(void)
{	
	int day,day2;
	char location[STR_SIZE], location2[STR_SIZE];
	char time , time2;
	char weather[STR_SIZE];
	int len , end;
	FILE * fp1 = fopen("practice.dat", "w");
	FILE * fp2 = fopen("practice.dat", "r");

	if (fp1 == NULL)
	{
		puts("������ ������ �ʾҽ��ϴ�.");
		return -1;
	}

	while (1) {

		fputs("��¥ : ", stdout);
		end = scanf("%d", &day);
		getchar(); // \n ���ֱ�

		if (end == EOF)
		{
			break;
		}

		fwrite(&day, sizeof(int), 1, fp1);

		fputs("���� : ", stdout);
		fgets(location, sizeof(location), stdin);
		fputs(location, fp1);

		fputs("����(A)/����(P) : ", stdout);
		time = fgetc(stdin);
		fputc(time, fp1);
		getchar();

		fputs("���� : ", stdout);
		fgets(weather, sizeof(weather), stdin);
		fputs(weather, fp1);
	}

	puts("���� �Է� �Ϸ�");

	fclose(fp1);

	

	if (fp2 == NULL)
	{
		puts("������ ������ �ʾҽ��ϴ�.");
		return -1;
	}

	while (1) {

		fread(&day, sizeof(int), 1, fp2);
		if (feof(fp2) != 0)
		{
			break;
		}
		fgets(location, sizeof(location), fp2);
		time = fgetc(fp2);
		fgets(weather, sizeof(weather), fp2);

		printf("��¥ : %d\n", day);
		printf("���� : %s\n", location);
		printf("����(A)/����(P) : %c\n", time);
		printf("����: %s\n", weather);
	}
	fclose(fp2);

	fp2 = fopen("practice.dat", "r");

	fputs("�˻��� ��¥ �� ���� ���� �Է�: ", stdout);
	
	scanf("%d  %s  %c", &day2, location2, &time2);
	///len = strlen(location2);
	location2[len] = '\n';
	location2[len+1] = '\0'; ���� ������ ���.///

sprintf(location2, "%s\n", location2);

while (1)
{
	fread(&day, sizeof(int), 1, fp2);
	if (feof(fp2) != 0)
	{
		puts("�����Ͱ� �������� �ʽ��ϴ�.");
		break;
	}

	fgets(location, sizeof(location), fp2);
	time = fgetc(fp2);
	fgets(weather, sizeof(weather), fp2);

	if (day == day2 &&
		!strcmp(location, location2) &&   //���� strcpm������ ���ϰ� location == location2 �� ������.
		time == time2)
	{

		printf("��¥ : %d\n", day);
		printf("���� : %s\n", location);
		printf("����(A)/����(P) : %c\n", time);
		printf("����: %s\n", weather);

		puts("�˻��� �Ϸ�Ǿ����ϴ�.");
		break;

	}
}

return 0;

}*/