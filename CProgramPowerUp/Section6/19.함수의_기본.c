/*#include <stdio.h>
#define FACTOR_ERROR -100

int Factorial(int);
int main(void)
{
	int num;
	int result;

	fputs("���� �Է�(1�̻�):", stdout);
	scanf("%d", &num);

	result = Factorial(num);
	if (result == FACTOR_ERROR)
		puts("�Է��� �߸��Ǿ� ����ġ ���� ����� ������ϴ�.");
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