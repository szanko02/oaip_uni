#include <stdio.h>
void gNum(float[31]);
void wrArr(float[31], int);
void getArr(float[31], int);

int main(void)
{
	float numbers[31];

	gNum(numbers);

	return 0;
}


void gNum(float arr[31])
{
	int n;

	printf("%s\n", "Введите кол-во элементов массива (не более 30): ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		printf("Введите %d элемент массива: \n", i+1);
		scanf("%f", &arr[i]);
	}

	printf("\n%s", "Исходный массив:");
	wrArr(arr, n);
	getArr(arr, n);
}


void wrArr(float arr[31], int n)
{
	printf("\n[ ");
	for (int i = 0; i < n; ++i)
	{
		printf("%g ", arr[i]);	
	}
	printf("]\n");
}


void getArr(float arr[31], int n)
{
	float negative[31], positive[31], newArr[31];
	int nCount = 0;
	int pCount = 0;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] < 0)
		{
			negative[nCount] = arr[i];
			nCount++;
		}
		else
		{
			positive[pCount] = arr[i];
			pCount++;
		}
	}

	for (int i = 0; i < nCount; ++i)
	{
		newArr[i] = negative[i];
	}
	for (int i = 0; i < pCount; ++i)
	{
		newArr[i+nCount] = positive[i];
	}

	printf("\n%s", "Измененный массив:");
	wrArr(newArr, n);
}