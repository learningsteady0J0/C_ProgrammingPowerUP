/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STR_ARR 5
#define EXT_SIZE 5

���� realloc �Լ��� ���� �ߴµ� ���⼭�� malloc �Լ��� �� ������. realloc�Լ��� �ᱹ�� malloc���� ����� �� ����.
��ū �޸� �Ҵ� -> ���� ���� ���ο� �޸𸮿� ���� -> �����޸𸮰� free�� ���ֱ� -> �ּҰ� ����

char * GetString()
{

	gets�� ������ ������ gets�� �迭���� �������� ���� ����� �����ϱ� ����
	�׷��� getchar�� �̿��Ͽ� ����

	int supply = EXT_SIZE;
	char * str = (char*)malloc(supply * sizeof(char));
	char ch;
	int i = 0 , j =0;
	while ((ch = getchar()) != '\n')
	{
		str[i++] = ch;
		if (i == supply) {
			supply = ExtendMemForString(&str, supply);
			
			
		}
	}

	str[i] = '\0'; // �ΰ�
	
	return str;
}

void SortString(char**str, int len)
{
	int i, j;
	char * temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - 1) - i; j++)
		{
			if (strlen(str[j]) > strlen(str[j + 1]))
			{
				temp = str[j];
				str[j] = str[j+1];
				str[j + 1] = temp;

			}
		}
	}

	return;
}

int ExtendMemForString(char ** string, int len)
{
	char * ext_string = (char*)malloc(sizeof(char)*(len + EXT_SIZE));
	int i,j;

	for (i = 0; i < len; i++)
	{
		ext_string[i] = (*string)[i];   // strcpy�� ������ �ֳ��ϸ� strcpy�� �ΰ��� �������� �����ϴµ� ���⼭�� �ΰ��� ���� �� ���ֱ⶧��.
	}

	
	
	free(*string);  // �޸𸮰��� ������� ���̱⶧���� �ٷ� �����ڵ����� ��� ��! string��ü�� ������°� �ƴ�.
	*string = ext_string;
	return len + EXT_SIZE;
}


int main(void)
{	
	char * str_arr[STR_ARR];
	int i;

	for (i = 0; i < STR_ARR; i++) {
		str_arr[i] = GetString();
	}

	SortString(str_arr, STR_ARR);

	for (i = 0; i < STR_ARR; i++)
	{
		printf("%s\n", str_arr[i]);
	}

	return 0;
}*/