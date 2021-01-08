#include <stdio.h>
#include <math.h>
int main()
{
    int x,y;
    printf("Введите x,y \n");
    scanf("%d%d", &x,&y);
    if (x*x+y*y==1) printf("Можно+");
    else printf("Нельзя-");
return 0;
}