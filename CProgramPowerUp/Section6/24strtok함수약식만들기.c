/*#include <stdio.h>

static�� Ȱ���� ������. 

char* strtok(char*str, char*delim)
{	
	static char * str_adr;
	char * strcopy;
	
	if (str != NULL) {
		str_adr = str;
	}
	strcopy = str_adr;
	
	if (*str_adr == '\0')
		return NULL;

	while (1) {
		if (*str_adr == '\0') {
			return strcopy;
		}

		if (*str_adr != delim[0]) {
			str_adr++;
		}
		else {
			break;
		}
	}
	*str_adr = '\0';
	str_adr++;
	

	return strcopy;
	
}

int main(void)
{
	char str[] = "111-2222-3333";
	char * delim = "-";
	char * token;
	
	printf("���ڿ��� �ּ� : %d \n", str);

	token = strtok(str, delim);
	while (token != NULL)
	{
		printf("��ū�� �ּ� : %d \n", token);
		puts(token);
		token = strtok(NULL, delim);
	}

	return 0;
}*/
