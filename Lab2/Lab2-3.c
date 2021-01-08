#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Введите номер месяца\n");
    scanf("%d", &a); 
    if (a==12 || a==1 || a==2) printf("Zima");
    else if (a==3 || a==4 || a==5) printf("Vesna"); 
    else if (a==6 || a==7 || a==8) printf("Leto"); 
    else if (a==9 || a==10 || a==11) printf("Osen");
    else if (a>12 || a<1) printf ("Error");
return 0;
}