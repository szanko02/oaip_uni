#include <stdio.h>
#include <math.h>
int main()
{
int a[50][50],b[50];
int x,y,i,j,d=0;
printf("введите x,y(x=y<50):");
scanf("%d",&x);
y=x;
for(i=0;i<x;i++)
for(j=0;j<y;j++)
    {
    printf("введите элемент [%d,%d]\n",i,j);
    scanf("%d",&a[i][j]);
    }
printf("ваша матрица:\n");
for(i=0;i<x;i++)
    {
    printf("\n ");
    for(j=0;j<y;j++)
        {
        printf("%d ",a[i][j]);
        } 
    }
for(i=0;i<x;i++)
for(j=0;j<y;j++)
    {
    if(a[i][j]>0) b[i]=b[i]+1;
    }
for(i=0;i<x;i++)
    {
    printf("\n%d", b[i]);
    }
for(i=0;i<x;i++)
    {
    if(b[i]=j) break;
    }
for(j=0;j<y;j++)
    {
    d=d+a[i][j];
    } 
printf("\n%d", d);

for(i=0;i<x;i++) 
    {
    for(j=0;j<y;j++)
        {
        a[i][j]=a[i][j]-d;
        }
    }
for(i=0;i<x;i++)  
    {
    printf("\n");
    for(j=0;j<y;j++)
        {
        printf("%d ",a[i][j]);
        }
    }
}