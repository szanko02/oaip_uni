#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Введите a,b,c \n");
    scanf("%d%d%d", &a,&b,&c);
    if (a!=b && abs(a)==abs(b)) printf("+Есть");
    else if (a!=c && abs(a)==abs(c)) printf("+Есть"); 
    else if (c!=b && abs(c)==abs(b)) printf("+Есть"); 
    else printf("Нет-");
return 0;
}