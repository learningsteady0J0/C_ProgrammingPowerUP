/*#include <stdio.h>
#include <stdlib.h>

void SortArr(int *arr, int num);
void ReadAndSortPrintf(int number);

int main(void)
{
	int num;
	fputs("입력할 정수의 개수 : ", stdout);
	scanf("%d", &num);

	ReadAndSortPrintf(num);
	return 0;
}

void SortArr(int*arr, int num) {
	int i, j, temp;

	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < (num - 1) - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void ReadAndSortPrintf(int number)
{

	int * arr = (int*)malloc(number * sizeof(int));
	int i;

	for (i = 0; i < number; i++) {
		printf("%d 번째 입력 : ", i + 1);
		scanf("%d", &arr[i]);

	}

	SortArr(arr, number);

	puts("입력할 숫자의 정렬된 출력");
	for (i = 0; i < number; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
}*/