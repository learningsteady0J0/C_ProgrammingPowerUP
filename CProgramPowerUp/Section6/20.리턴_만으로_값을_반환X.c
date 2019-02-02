/*#include <stdio.h>
#define DIV_ERROR -256

함수가 값읇 반환한다는 건 리턴 만이 값의 반환을 의미하는 것이 아님.
매개 변수 전달을 통해서도 값은 반환될 수 있음.(함수 호출 시 변수의 포인터를 인자로 전달하는 방식)

int DivInt(int  num1, int num2 , int *result) {
	
	if (num2 == 0) {
		return DIV_ERROR;
	}
	else {
		result[0] = num1 / num2;
		result[1] = num1 % num2;
		return 1; 21.리턴_만으로_값을_반환X.c
	}

	
}

int main(void)
{
	int num1, num2;
	int result[2];
	int divisor;
	fputs("나눗셈 위한 두 정수 입력: ",stdout);

	while (1) {
		scanf("%d  %d", &num1, &num2);
		divisor = DivInt(num1, num2,result);
		if (divisor == DIV_ERROR) {
			puts("0으로 나누는 오류 발생! 숫자 재입력\n\n");
			continue;
		}
		else {
			printf("몫 : %d, 나머지 : %d", result[0], result[1]);
			break;
		}
	}

	return 0;
}
*/