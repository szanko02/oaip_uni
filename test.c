#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 20

int main()
{
  double arr[N][N + 1];
  double x[N];
  int answer[N]; 
  int i, j, k, n;
  
  //проверка числа уравнений
  printf( "Введите число уравнений системы: " );
  scanf( "%d", & n );
  if ( N < n )
    printf( "Слишком большое число уравнений. Повторите ввод\n" );
  
  //ввод системы
  while ( N < n );
  printf( "Введите систему:\n" );
  for ( i = 0; i < n; i++ )
    for ( j = 0; j < n + 1; j++ )
      scanf( "%lf", & arr[i][j] );
  //вывод системы
  printf( "Система:\n" );
  for ( i = 0; i < n; i++ )
  {
 for ( j = 0; j < n + 1; j++ )
      printf( "%.2f ", arr[i][j] );
    printf( "\n" );    
  }
  
  
  for ( i = 0; i < n + 1; i++ )
    answer[i] = i;
  
  //прямой ход
  for ( k = 0; k < n; k++ )
  { 
    mainElement ( k, arr, answer, n );
    if ( fabs(arr[k][k]) < 0.0001 )
    {
      printf ("Нет единственного решения");
      return (0);
    }
    for ( j = n; j >= k; j-- )
      arr[k][j] /= arr[k][k];
    for ( i = k + 1; i < n; i++ )
      for ( j = n; j >= k; j-- )
        arr[i][j] -= arr[k][j] * arr[i][k];
  }
  
  //обратный ход
  for ( i = 0; i < n; i++)
  x[N] = arr[i][n];
  for ( i = n-2; i>=0; i--)
    for ( j = i+1; j < n; j++)
      x[i] -= x[j]*arr[i][j];
  
  //вывод
  printf("Ответ:\n");
  for ( i = 0; i < k; i++)
    for ( j=0; j < k; j++)
      if ( i == answer[j] );
        {
          printf ( "%f\n", x[j]);
        }
  return (0);
  
}


void mainElement(int answer[N], int n, int k, double arr[][N+1])
{
  double tmp; 
  int i, j, max_i = k, max_j = k;
  
  
  for (i = k; i < n; i++)
  
    for (j = k; i < n; j++)
      if ( fabs(arr[max_i][max_j] < arr[i][j]) )
      {
        max_i = i;
        max_j = j;
      }
  
  
  for ( j = k; j < n + 1; j++)
    {
      tmp = arr[k][j];
      arr[k][j] = arr[max_i][j];
      arr[max_i][j] = tmp;
    }
  
  
  for ( i = k; i < n + 1; i++)
    {
      tmp = arr[i][k];
      arr[i][k] = arr[i][max_j];
      arr[i][max_j] = tmp;
    }
}
