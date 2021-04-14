#include <stdio.h>
int main()
{
  int i,j,k,n;
  float array[20][20], b, x[10], sum=0.0;
  printf("Введите кол-во строк матрицы: ");
  scanf("%d",&n);
  printf("Введите эл-ты матрицы\n");
  for (i=1;i<=n;i++)
    {
      for (j=1;j<=n;j++)
        {
          printf("Элемент[%d][%d]: ", i,j);
          scanf("%f", &array[i][j]);
        }
    } 
  for (j=1; j<=n;j++)
    {
      if(i>j)
        {
          b=array[i][j]/array[i][j];
          for (k=1; k<=n+1;k++)
            {
              array[i][k]=array[i][k]-b*array[j][k];
            }
        }
    } 
  x[n]=array[n][n+1]/array[n][n];
  for (i=n-1;i>=1;i--)
    {
      sum=0;
      for(j=i+1;j<=n;j++)
        {
          sum=sum+array[i][j]*x[i];
        }
      x[i]=(array[i][n+1]-sum)/array[i][j];

    }
  printf("Решение системы:\n");
  for(i=1;i<=n;i++)
    {
      printf("\nx%d=%f\t", i,x[i]);
    }
  return(0);
}
