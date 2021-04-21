#include <stdio.h>
#include <stdlib.h>
#define N 100
int hashTable[N]
int HashFunction (int k )
{
    return (k%10);
}

void main()
{
    int key;

    printf("Key=");
    scanf("%d", &key);
    printf("HashFunction(%d)=%d\n",key,HashFunction(key));
}