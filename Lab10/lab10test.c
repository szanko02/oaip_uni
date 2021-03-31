#include <stdio.h>
#define N 20
int main(void)
{
double massive[N][N + 1];
double x[N]; //Корни системы
int root[N]; //Порядок корней
int i, j, k, n;
//Ввод данных
{
printf( "Введите число уравнений системы: " );
scanf( "%d", &n );
if ( N < n )
printf( "Слишком большое число уравнений. Повторите ввод\n" );
}
while ( N < n );
printf( "Введите систему:\n" );
for ( i = 0; i < n; i++ )
for ( j = 0; j < n + 1; j++ )
scanf( "%lf", & massive[i][j] );
//Вывод введенной системы
printf( "Система:\n" );
for ( i = 0; i < n; i++ )
{
for ( j = 0; j < n + 1; j++ )
printf( "%.2f ", massive[i][j] );
printf( "\n" );
}
for ( i = 0; i < n; i++ )
root[N]=i;
for (int i = 0; i< n-1; i++ )
    if ( massive[i][0] < massive[i+1][0] )
}