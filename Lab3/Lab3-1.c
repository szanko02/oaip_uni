#include <stdio.h>
#include <math.h>
void main()
{
float s=0, n=0;
while (s<=5){
n++;
s=s+(1/n);
}
printf("%f", n); 
}