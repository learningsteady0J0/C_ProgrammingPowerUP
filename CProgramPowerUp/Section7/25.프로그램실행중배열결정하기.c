/*#include <stdio.h>
#include <stdlib.h>

void SortArr(int *arr, int num);
void ReadAndSortPrintf(int number);

int main(void)
{
	int num;
	fputs("�Է��� ������ ���� : ", stdout);
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
		printf("%d ��° �Է� : ", i + 1);
		scanf("%d", &arr[i]);

	}

	SortArr(arr, number);

	puts("�Է��� ������ ���ĵ� ���");
	for (i = 0; i < number; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
}*/