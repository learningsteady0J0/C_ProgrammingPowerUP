/* #include <stdio.h>

6������ ����� ���������� �����ʴ�.  ���ʿ��� ���������� ������.
��� �ʿ��� �������� ����� �ڵ尡 ���������� �ʴ´�.

int main(void) {
	int i_num=0;
	int max=0, min=0;
	int sum=0, count=0;

	for (count = 0; count < 7; count++) {
		scanf("%d", &i_num);

		�ּҰ� �ִ밪�� �ʱ� ���� �ޱ�����.
		if (count == 0) {
			max = min = i_num;
		}
		max = i_num > max ? i_num : max;
		min = i_num < min ? i_num : min;
		sum += i_num;

	}

	printf("�ִ밪: %d  �ּҰ�: %d  ��ü��: %d �� ��: %f", max, min, sum, (double)sum/count);

	return 0;
} */