#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int x,y,i,j,min,max,x1,x2,y1,y2,buf,sum=0;
printf("введите кол-во строк ");
scanf("%d",&x);
printf("введите кол-во столбцов ");
scanf("%d",&y);
int a[x][y];
for(i=0;i<x;i++){
for(j=0;j<y;j++){
printf("введите элемент[%d][%d]",i+1,j+1);
scanf("%d",&a[i][j]);
}}
printf("Ваша матрица...");
for(i=0;i<x;i++){
printf("\n");
for(j=0;j<y;j++){
printf("%d ",a[i][j]);

}}
max=a[0][0];

for(i=0;i<x;i++){
for(j=0;j<y;j++){
if(a[i][j]>max){
max=a[i][j];
x1=i;
y1=j;
}
}
}
min=a[0][0];
for(i=0;i<x;i++){
for(j=0;j<y;j++){
if(a[i][j]<min){
min=a[i][j];
x2=i;
y2=j;
}
}
}
buf=a[x1][y1];
a[x1][y1]=a[x2][y2];
a[x2][y2]=buf;
printf("\nВаша матрица...");
for(i=0;i<x;i++){
printf("\n");
for(j=0;j<y;j++){
printf("%d ",a[i][j]);
}}
printf("\nсумма главной диагонали");
for(i=0;i<x;i++){
j=i;
if(j<y) sum=sum+a[i][j];

}
printf("\n%d",sum);
}