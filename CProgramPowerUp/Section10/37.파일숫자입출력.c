/*#include <stdio.h>

fread((void*)ptr,sizeof(int),count,FILE*) �⺻ ���.  (void*)ptr �ڸ��� &num �䷸�� ���� �� ����.

�����͸� �����Ҷ� 4����Ʈ�� �����ߴٸ� �������� 4����Ʈ�� �о�� �������� �ǹ̰� �����ȴ�.

�� ������ wb ��� wt�� �ٲ㵵 �����ϰ� �۵��ȴ�.

int main(void)
{
	int num;
	int num2;
	int i;
	FILE * fp1, *fp2;
	fp1 = fopen("numeric.dat", "wb");
	if (fp1 == NULL)
	{
		puts("������ �������ʾҽ��ϴ�.");
		return -1;
	}
	for (i = 0; i < 5; i++)
	{
		printf("���Ͽ� ������ ���� %d : ", i + 1);
		scanf("%d", &num);
		fwrite(&num, sizeof(int), 1, fp1);  // num�� �ּҰ��� ��ȯ�ؾ��Ѵ�.
	}
	puts("�ԷµǾ����ϴ�.\n");
	
	fclose(fp1);

	fp2 = fopen("numeric.dat", "rb");
	if (fp2 == NULL)
	{
		puts("������ �������ʾҽ��ϴ�.");
		return -1;
	}
	

	for (i = 0; i < 5; i++)
	{
		fread(&num2, sizeof(int), 1, fp2);
		printf("%d��° ���Ͽ� �Է� �� ����  : %d \n", i + 1,num2);
		
	}
	fclose(fp2);

}*/