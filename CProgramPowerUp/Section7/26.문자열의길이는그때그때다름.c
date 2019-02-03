/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STR_ARR 5
#define EXT_SIZE 5

나는 realloc 함수로 구현 했는데 여기서는 malloc 함수로 다 구현함. realloc함수도 결국엔 malloc으로 만드는 것 같음.
더큰 메모리 할당 -> 그전 값들 새로운 메모리에 복사 -> 그전메모리값 free로 없애기 -> 주소값 변경

char * GetString()
{

	gets를 못쓰는 이유는 gets는 배열값이 정해졌을 때만 사용이 가능하기 때문
	그래서 getchar를 이용하여 만듬

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

	str[i] = '\0'; // 널값
	
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
		ext_string[i] = (*string)[i];   // strcpy는 못쓴다 왜냐하면 strcpy는 널값을 기준으로 복사하는데 여기서는 널값이 없을 수 도있기때문.
	}

	
	
	free(*string);  // 메모리값이 사라지는 것이기때문에 바로 밑줄코드전에 적어도 됨! string자체가 사라지는게 아님.
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