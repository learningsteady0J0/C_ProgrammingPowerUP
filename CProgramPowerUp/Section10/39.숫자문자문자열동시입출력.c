/*#include <stdio.h>
#include <string.h>
#define STR_SIZE 100
//fgets는 \n도 포함된다.  그리고 fgets 함수는 개행을 기준으로 읽기때문에 입력할때 개행이 없이 입력되면 그뒤까지 모두 포함해서 fgets함수로 읽힌다.
//feof 함수는 파일의 끝(EOF)에 도달했을 때 0이 아닌 값을 반환.. 여기서 파일의 끝은 마지막데이터의 위치가아닌. 마지막 데이터 후
// 한 번더 데이터를 읽을려고 시도할 시 EOF를 반환함.. 따라서 예제에서 fread함수뒤에 feof함수를 넣음.
//sprintf함수의 활용을 잘 생각하자.
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
		puts("파일이 열리지 않았습니다.");
		return -1;
	}

	while (1) {

		fputs("날짜 : ", stdout);
		end = scanf("%d", &day);
		getchar(); // \n 없애기

		if (end == EOF)
		{
			break;
		}

		fwrite(&day, sizeof(int), 1, fp1);

		fputs("지역 : ", stdout);
		fgets(location, sizeof(location), stdin);
		fputs(location, fp1);

		fputs("오전(A)/오후(P) : ", stdout);
		time = fgetc(stdin);
		fputc(time, fp1);
		getchar();

		fputs("날씨 : ", stdout);
		fgets(weather, sizeof(weather), stdin);
		fputs(weather, fp1);
	}

	puts("파일 입력 완료");

	fclose(fp1);

	

	if (fp2 == NULL)
	{
		puts("파일이 열리지 않았습니다.");
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

		printf("날짜 : %d\n", day);
		printf("지역 : %s\n", location);
		printf("오전(A)/오후(P) : %c\n", time);
		printf("날씨: %s\n", weather);
	}
	fclose(fp2);

	fp2 = fopen("practice.dat", "r");

	fputs("검색할 날짜 및 지역 정보 입력: ", stdout);
	
	scanf("%d  %s  %c", &day2, location2, &time2);
	///len = strlen(location2);
	location2[len] = '\n';
	location2[len+1] = '\0'; 내가 생각한 방삭.///

sprintf(location2, "%s\n", location2);

while (1)
{
	fread(&day, sizeof(int), 1, fp2);
	if (feof(fp2) != 0)
	{
		puts("데이터가 존재하지 않습니다.");
		break;
	}

	fgets(location, sizeof(location), fp2);
	time = fgetc(fp2);
	fgets(weather, sizeof(weather), fp2);

	if (day == day2 &&
		!strcmp(location, location2) &&   //나는 strcpm생각을 못하고 location == location2 로 삽질함.
		time == time2)
	{

		printf("날짜 : %d\n", day);
		printf("지역 : %s\n", location);
		printf("오전(A)/오후(P) : %c\n", time);
		printf("날씨: %s\n", weather);

		puts("검색이 완료되었습니다.");
		break;

	}
}

return 0;

}*/
