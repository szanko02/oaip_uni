#include <stdio.h>
#include <malloc.h>
int getArrLen();
void arrEl(int*);
void posEl(int*, int);
void sumEl(int*, int);
int main(void)
{
	int *num;
	arrEl(num);
	return 0;
}
int getArrLen()
{
	int len;
	printf("%s\n", "Введите число элементов массива: ");
	scanf("%d", &len);
	return len;
}
void arrEl(int *arr)
{
	int n = getArrLen();
	arr = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; ++i)
	{
		printf("Введите %d элемент массива\n", i+1);
		scanf("%d", (arr + i));
	}

	posEl(arr, n);
	sumEl
(arr, n);
}
void posEl(int *arr, int n)
{
	int posCount = 0;
	for (int i = 0; i < n; ++i)
	{
		if(*(arr+i) > 0) posCount
++;
	}

	printf("Количество положительных элементов массива равно %d\n", posCount);
}
void sumEl(int *arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += *(arr+i);
		if(sum == sum - *(arr+i)) sum = 0;
	}

	printf("Сумма эл-тов массива %d\n", sum);
}