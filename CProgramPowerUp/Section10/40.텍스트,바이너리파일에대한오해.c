/*#include <stdio.h>
#include <string.h>
�ü���� �ؽ�Ʈ ���ϰ� ���̳ʸ� ������ ����� ���� ���� �ʴ´�.������ �ܼ��� ������ ��.�ᱹ�� �����Ͱ� ����Ǵ� ��.
(���ڰ� ��������Ǵ°� �ƴϰ� �ƽ�Ű �ڵ尪�� ����ɻ���.)
�ؽ�Ʈ ��� ���� �� ���̳ʸ� ��� ���¸��� �����һ�.�̵��� �������� ���๮���� ó����Ŀ� ����.
���Ͽ� �ؽ�Ʈ �����Ͱ� ������־ ��Ʈ�е�� ���� �ؽ�Ʈ ������� ���� �� �ִ� ���ϵ��� �ؽ�Ʈ�����̶�� �ϰ� ���̿��� ������ ���̳ʸ������̶����.

� ����̰� ���� �� ���ڿ� �����ؼ� ������Ҷ� ���ڰ����Լ����� ����ϴ°� ����(get, put, fscanf���)
� ����̰� ����Ʈ ������ �����͸� �����ϰ����ϸ� fread fwrite�Լ��� ����.

int main(void)
{	
	char str[50];
	char str2=0;
	int len;
	int i;
	FILE *fp = fopen("string.txt", "wt");
	puts("���ڿ� �Է� �� ���� \n");
	fputs("ù ��° ���ڿ� : ", stdout);
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	fwrite((void*)str, sizeof(char), len, fp);
	fputs("�� ��° ���ڿ� : ", stdout);
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	fwrite((void*)str, sizeof(char), len, fp);
	fclose(fp);

	fp = fopen("string.txt", "rt");
	puts("\n----����� ���ڿ� ���---");
	fputs("ù ��° ���ڿ� : ", stdout);
	while (1)
	{
		fread(&str2, sizeof(char), 1, fp);
		printf("%c", str2);
		if (str2 == '\n')
			break;
	}
	fputs("�� ��° ���ڿ� : ", stdout);
	i=0;
	while (1)
	{
		fread(str1+i, sizeof(char), 1, fp);
		
		if (str1[i] == '\n'){
			str1[i+1]= '\0';
			break;
			}
			i++;
	}
	printf("�ι�° ���ڿ� %s",str1);


	return 0;

}*/