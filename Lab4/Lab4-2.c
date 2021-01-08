#include <stdio.h>

void gNum(float[31]);
void wrArr(float[31], int);
int gResult(float[31], int);


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
	
	printf("Кол-во элементов отличающихся от среднего значения не более чем на 3 равно %d\n", gResult(arr, n));
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


int gResult(float arr[31], int n)
{
	float avgValue;
	float sum = 0;
	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}

	avgValue = sum/n;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] <= avgValue+3 && arr[i] >= avgValue-3) count++;
	}

	return count;
}