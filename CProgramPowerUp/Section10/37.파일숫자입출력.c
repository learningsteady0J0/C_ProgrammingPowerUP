/*#include <stdio.h>

fread((void*)ptr,sizeof(int),count,FILE*) 기본 양식.  (void*)ptr 자리에 &num 요렇게 넣을 수 있음.

데이터를 저장할때 4바이트로 저장했다면 읽을때도 4바이트로 읽어야 데이터의 의미가 보존된다.

이 예제는 wb 대신 wt로 바꿔도 동일하게 작동된다.

int main(void)
{
	int num;
	int num2;
	int i;
	FILE * fp1, *fp2;
	fp1 = fopen("numeric.dat", "wb");
	if (fp1 == NULL)
	{
		puts("파일이 열리지않았습니다.");
		return -1;
	}
	for (i = 0; i < 5; i++)
	{
		printf("파일에 저장할 숫자 %d : ", i + 1);
		scanf("%d", &num);
		fwrite(&num, sizeof(int), 1, fp1);  // num의 주소값을 반환해야한다.
	}
	puts("입력되었습니다.\n");
	
	fclose(fp1);

	fp2 = fopen("numeric.dat", "rb");
	if (fp2 == NULL)
	{
		puts("파일이 열리지않았습니다.");
		return -1;
	}
	

	for (i = 0; i < 5; i++)
	{
		fread(&num2, sizeof(int), 1, fp2);
		printf("%d번째 파일에 입력 된 숫자  : %d \n", i + 1,num2);
		
	}
	fclose(fp2);

}*/