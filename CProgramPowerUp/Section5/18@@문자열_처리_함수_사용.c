/*#include<stdio.h>
#include<string.h>
#define STR_LEN 20
#define STR_COUNT 4
#define STR_ARR STR_LEN * STR_COUNT

�� ����� ���� ������ �ٽ� �ۼ��غ���.
���ڿ� ����Ʈ�� Ȱ���� ������
int main() {
	char  str1[STR_LEN], str2[STR_LEN], str3[STR_LEN], str4[STR_LEN];
	char merge_str[STR_ARR] = { 0 };
	char *str_arr[STR_COUNT] = { str1,str2,str3,str4 };
	char *str_temp;
	int i;
	int j;

	for (i = 0; i < STR_COUNT; i++)
	{
		printf("���ڿ� �Է� %d :", i + 1);
		gets(str_arr[i]);

	}

	for (i = 0; i < STR_COUNT - 1; i++) {
		for (j = 0; j < STR_COUNT - 1 - i; j++) {
			if (strcmp(str_arr[j], str_arr[j + 1]) > 0) {
				str_temp = str_arr[j];
				str_arr[j] = str_arr[j + 1];
				str_arr[j + 1] = str_temp;
			}
		}
	}

	for (i = 0; i < STR_COUNT; i++) {
		strcat(merge_str, str_arr[i]);
		merge_str[strlen(merge_str)] = ' ';

	}


	printf("���ĵ� ���ڿ�: %s", merge_str);



	return 0;
}*/