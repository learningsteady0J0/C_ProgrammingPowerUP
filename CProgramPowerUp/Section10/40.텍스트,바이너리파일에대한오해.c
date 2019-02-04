/*#include <stdio.h>
#include <string.h>
운영체제는 텍스트 파일과 바이너리 파일을 나누어서 구분 짓지 않는다.파일은 단순한 파일일 뿐.결국은 데이터가 저장되는 것.
(문자가 직접저장되는게 아니고 아스키 코드값이 저장될뿐임.)
텍스트 모드 오픈 과 바이너리 모드 오픈만이 존재할뿐.이둘의 차이점은 개행문자의 처리방식에 있음.
파일에 텍스트 데이터가 저장되있어서 노트패드와 같은 텍스트 편집기로 읽을 수 있는 파일들을 텍스트파일이라고 하고 그이외의 파일을 바이너리파일이라고함.

어떤 모드이건 문자 및 문자열 관련해서 입출력할땐 문자관련함수들을 사용하는게 좋고(get, put, fscanf등등)
어떤 모드이건 바이트 단위로 데이터를 저장하고자하면 fread fwrite함수가 좋다.

int main(void)
{	
	char str[50];
	char str2=0;
	int len;
	int i;
	FILE *fp = fopen("string.txt", "wt");
	puts("문자열 입력 및 저장 \n");
	fputs("첫 번째 문자열 : ", stdout);
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	fwrite((void*)str, sizeof(char), len, fp);
	fputs("두 번째 문자열 : ", stdout);
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	fwrite((void*)str, sizeof(char), len, fp);
	fclose(fp);

	fp = fopen("string.txt", "rt");
	puts("\n----저장된 문자열 출력---");
	fputs("첫 번째 문자열 : ", stdout);
	while (1)
	{
		fread(&str2, sizeof(char), 1, fp);
		printf("%c", str2);
		if (str2 == '\n')
			break;
	}
	fputs("두 번째 문자열 : ", stdout);
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
	printf("두번째 문자열 %s",str1);


	return 0;

}*/