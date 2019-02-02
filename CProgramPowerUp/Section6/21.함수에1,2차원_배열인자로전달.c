/*#include <stdio.h>
#define ARR3_SIZE 2
#define ARR4_SIZE 3

2차 배열의 길이를 잴때 약간 햇갈렸음.체크!
sizeof 함수에 배열이름이 아닌 포인터 변수가 들어가면 계산이 불가능하다!
함수에 배열을 전달할때  1차는 길이 2차는 가로길이를 전해주는건 교과서에나오는 정석!
2차 배열을 하나의 함수로 해결할 수 있지만.명확성이 떨어지기 때문에 안좋음.

int ArrTotal(int  arr[], int len) {
	int i;
	int sum = 0;
	for (i = 0; i < len; i++) {
		sum += arr[i];
	}
	return sum;
}

int ArrTwoTotal1(int(*arr)[ARR3_SIZE], int len) {
	int i, j;
	int sum = 0;

	for (i = 0; i < len; i++) {
		for (j = 0; j < ARR3_SIZE; j++) {
			sum += arr[i][j];
			printf(arr[i][j]);
		}
	}
	return sum;
}

int ArrTwoTotal2(int(*arr)[ARR4_SIZE], int len) {
	int i, j;
	int sum = 0;
	for (i = 0; i < len; i++) {
		for (j = 0; j < ARR4_SIZE; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}

int main(void)
{
	int arr1[3] = { 5,10,15 };
	int arr2[5] = { 1,2,3,4,5 };
	int arr3[2][ARR3_SIZE] = { 1,3,5,7 };
	int arr4[2][ARR4_SIZE] = { 1,2,3,4,5,6 };
	int sum1, sum2;
	int len1, len2;
	len1 = sizeof(arr1) / sizeof(int);
	len2 = sizeof(arr2) / sizeof(int);

	sum1 = ArrTotal(arr1, len1);
	sum2 = ArrTotal(arr2, len2);

	printf("5,10,15의 합 : %d\n", sum1);
	printf("1,2,3,4,5의 합 : %d\n\n", sum2);

	len1 = sizeof(arr3) / sizeof(arr3[0]);
	len2 = sizeof(arr4) / sizeof(arr4[0]);

	sum1 = ArrTwoTotal1(arr3, len1);
	sum2 = ArrTwoTotal2(arr4, len2);

	printf("1,3,5,7의 합: %d\n", sum1);
	printf("1,2,3,4,5,6의 합: %d\n", sum2);
	return 0;
}*/