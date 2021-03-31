#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <malloc.h>
#include <conio.h>
void insertionSort(int*array,int arraySize, int n)
    {
        for (int i=0; i < arraySize; i++)
        {
            if (n==array[i])
                {   
                    for (int j=i+1; j< arraySize-1; j++)
                        {
                            int minElement=j;
                            for (int b=j+1; b < arraySize; b++)
                                {
                                    if (array[b] < array[minElement])
                                    minElement=b;
                                }
                            int temp=array[j];
                            array[j]=array[minElement];
                            array[minElement]=temp;  
                        }
                }
        }
    }

int main (void)
{
    
    int n;
    printf ("Введите число");
    scanf ("%d", &n);
    int *array;
    int arraySize;
    printf ("Введите размер массива");
    scanf ("%d", &arraySize);
    array=(int*)malloc(arraySize*sizeof(int));
    for (int i=0; i<arraySize; i++)
    {
        printf("array[%d]=", i+1);
        scanf("%d", &array[i]);
    }
    for (int i=0; i<arraySize; i++)
        {
            printf("array[%d] = %d \n", i+1,array[i]);
        }
    insertionSort(array,arraySize,n);
    for (int i=0; i<arraySize; i++)
        {
            printf(" array[%d] = %d", i+1,array[i]);
        }
}
