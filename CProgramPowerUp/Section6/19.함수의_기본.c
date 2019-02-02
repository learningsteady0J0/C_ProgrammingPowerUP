/*#include <stdio.h>
#define FACTOR_ERROR -100

int Factorial(int);
int main(void)
{
	int num;
	int result;

	fputs("숫자 입력(1이상):", stdout);
	scanf("%d", &num);

	result = Factorial(num);
	if (result == FACTOR_ERROR)
		puts("입력이 잘못되어 예상치 못한 결과를 얻었습니다.");
	else
		printf("%d! = %d", num, result);

	return 0;
}

int Factorial(int num)
{
	int i;
	int fac = 1;

	if (num <= 1) {
		return FACTOR_ERROR;
	}

	for (i = 1; i <= num; i++) {
		fac *= i;
	}


	return fac;


}*/