#include <stdio.h>
#include <math.h>
int main () 
{
    int n=1000,k=0,i,j;
    for (i=0; i*i*i<=n-1; i++)
        for (j=i; j*j*j<=n-1; j++)
            if ( i*i*i+j*j*j==n) 
                   k++;
   printf ("\n%d sposob(ov)",k);
   return 0;
}
