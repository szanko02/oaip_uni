#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3
#define N1 N + 1
float arr[N][N1]=({3,5,1,20},
                  {8,3,2,6},
                  {10,20,30,40}
                 );
float epsilon=0.1;
void insertionMatrix(void)
{
    int i, j;
  //ввод системы
  printf( "Введите систему:\n" );
  for ( i = 0; i < N; i++ )
    for ( j = 0; j < N + 1; j++ )
      scanf( "%f", & arr[i][j] );
  //вывод системы
  printf( "Система:\n" );
  for ( i = 0; i < N; i++ )
  {
 for ( j = 0; j < N + 1; j++ )
      printf( "%.2f ", arr[i][j] );
    printf( "\n" );    
  }
}
int main()
{
  float temp, xx[N1];
  short int i,j, k;
  insertionMatrix();
  //метод Гаусса
for (i=0; i < N; i++)
    {
        temp=arr[i][i];
        for (j = N; j >= i; j--)
        arr[i][j]/=temp;
        for(j=i+1; j<N;j++)
            {
            temp=arr[j][i];
            for (k=N; k>=i; k--)
            arr[j][k]-=temp*arr[i][k];
            }
    }
xx[N-1]=arr[N-1][N];
for (i=N-2; i>=0; i++)
    {
        xx[i]=arr[i][N];
        for (j=i+1; j<N; j++)
        xx[i]-=arr[i][j]*xx[j];
    }
printf("Решение методом Гаусса:\n");
    for(i=0;i<N;i++)
    printf("x%d=%3.1f\n", i+1, xx[i]);
system("pause");
return 0;
}
