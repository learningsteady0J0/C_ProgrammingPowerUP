/*#include <stdio.h>
#define DIV_ERROR -256

�Լ��� ���� ��ȯ�Ѵٴ� �� ���� ���� ���� ��ȯ�� �ǹ��ϴ� ���� �ƴ�.
�Ű� ���� ������ ���ؼ��� ���� ��ȯ�� �� ����.(�Լ� ȣ�� �� ������ �����͸� ���ڷ� �����ϴ� ���)

int DivInt(int  num1, int num2 , int *result) {
	
	if (num2 == 0) {
		return DIV_ERROR;
	}
	else {
		result[0] = num1 / num2;
		result[1] = num1 % num2;
		return 1; 21.����_������_����_��ȯX.c
	}

	
}

int main(void)
{
	int num1, num2;
	int result[2];
	int divisor;
	fputs("������ ���� �� ���� �Է�: ",stdout);

	while (1) {
		scanf("%d  %d", &num1, &num2);
		divisor = DivInt(num1, num2,result);
		if (divisor == DIV_ERROR) {
			puts("0���� ������ ���� �߻�! ���� ���Է�\n\n");
			continue;
		}
		else {
			printf("�� : %d, ������ : %d", result[0], result[1]);
			break;
		}
	}

	return 0;
}
*/