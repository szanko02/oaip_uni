#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
    float x, z, y, sk, s, dr;
    printf("x\n:");
    scanf("%f", &x);
    printf("y\n:");
    scanf("%f", &y);
    printf("z\n:");
    scanf("%f", &z);
    dr=2*cos(x-2/3)/1/2+pow(sin(y),2);
    sk=1+(z*z/(3-(z*z/5)));//1+(sqrt(z)/(3-(sqrt(z)/5)))
   s=dr*sk;
    printf("%f\n", s);
    return 0;
}