#include <stdio.h>
#include <malloc.h>

void setMatrix(int**);
void inputMatrixEl(int**, const int, const int);
void viewMatrix(int**, const int, const int);
void negativeRow(int**, const int, const int);


int main(void)
{
	int **matrix = NULL;

	setMatrix(matrix);

	return 0;
}


void setMatrix(int **m)
{
	int rows, collumn;

	printf("%s\n", "Введите число строк матрицы: ");
	scanf("%d", &rows);

	printf("%s\n", "Введите число столбцов матрицы: ");
	scanf("%d", &collumn);

	m = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < collumn; ++i)
	{
		m[i] = (int*)malloc(collumn * sizeof(int));
	}

	inputMatrixEl(m, rows, collumn);
}


void inputMatrixEl(int **m, const int rows, const int collumn)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < collumn; ++j)
		{
			printf("Введите элемент матрицы %d-%d:\n", (i+1), (j+1));
			scanf("%d", (m[i] + j));
		}
	}

	viewMatrix(m, rows, collumn);
	negativeRow(m, rows, collumn);
}


void viewMatrix(int **m, const int rows, const int collumn)
{
	for(int i = 0; i < 71; i++) printf("-%s", (i == 0 || i == 70 ? "\n" : ""));
	for (int i = 0; i < rows; ++i)
	{
		printf("\t\v");

		for (int j = 0; j < collumn; ++j)
		{
			printf("%d\t", *(m[i] + j));
		}

		printf("\n");
	}

	printf("\v");
	for(int i = 0; i < 70; i++) printf("-%s", (i == 69 ? "\n" : ""));
}


void negativeRow(int **m, const int rows, const int collumn)
{
	int count = 0;
	int check = 0;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < collumn; ++j)
		{
			if(*(m[i] + j) < 0) count++;
			else count = 0;
		}

		if(count == collumn)
		{
			printf("Строка %d содержит отрицательные элементы\n", (i + 1));
			check = 1;
		} 
	}

	if(check == 0)
	{
		printf("Нет строк с отрицательнынми эл-тами\n");
	}
}