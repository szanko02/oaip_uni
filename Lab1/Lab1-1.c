#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(void) {
    setlocale(LC_ALL,"Russian");
    int x, s;
    printf("Введите переменную x:");
    scanf("%d", &x);
    s=32*powf(x,6);
    printf("%d", s);
    return 0;
}