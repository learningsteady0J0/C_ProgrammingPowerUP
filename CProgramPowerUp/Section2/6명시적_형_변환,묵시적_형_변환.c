/* #include <stdio.h>

6번문제 빈번한 변수선언은 좋지않다.  불필요한 변수선언은 줄이자.
대신 필요한 변수선언 해줘야 코드가 복잡해지지 않는다.

int main(void) {
	int i_num=0;
	int max=0, min=0;
	int sum=0, count=0;

	for (count = 0; count < 7; count++) {
		scanf("%d", &i_num);

		최소값 최대값의 초기 값을 받기위함.
		if (count == 0) {
			max = min = i_num;
		}
		max = i_num > max ? i_num : max;
		min = i_num < min ? i_num : min;
		sum += i_num;

	}

	printf("최대값: %d  최소값: %d  전체합: %d 평 균: %f", max, min, sum, (double)sum/count);

	return 0;
} */