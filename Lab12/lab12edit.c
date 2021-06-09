#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SIZE 10

struct Table
{
    int key;
    int value;
    int maybe;
} p[SIZE];

void init()
{   
    for(int i = 0; i < SIZE; i++){
            p[i].value = -1;
            p[i].key = i;
    }
}

void AddTable(int select1)
{
    srand(time(NULL));
    for (int i = 0; i < select1; i++)
    {
        int valuer = rand() % 100;
        p[i].maybe = valuer;
    }
}

void HashFunction(int select2)
{
    for (int i = 0; i < select2; i++)
    {
        int key = p[i].maybe % SIZE;
        p[key].key = key;
        if(p[key].value == -1)
        {
            p[key].value = p[i].maybe; 
        }
        else
        {   
            printf("Коллизия: в ключе %d стоит элемент %d !\n",p[key].key,p[key].value);
            printf("Невозможно вставить %d\n",p[i].maybe);
        }
    }
}

void Search()
{
    int sum = 0;
    int part = 0;
    for(int i = 0; i < SIZE; i++){
        if(p[i].value != -1 && p[i].value != 0){
            sum+=p[i].value;
            part++;
        }
    }
    float partSum = sum/part;
    int partTrue = 0;
    for(int j = 0; j < SIZE; j++){
        if(p[j].value > partSum){
            partTrue++;
        }
    }
    printf("Количество элементов больше среднего:%d\n",partTrue);
}

void PrintTable()
{
    for (int i = 0; i < SIZE; i++)
        printf("Значение:%d \t Ключ:%d \n", p[i].value,p[i].key);
}
int main()
{
    init();
    int select = 0;
    printf("Сколько будет создано ключей(от 1 до 10):");
    scanf("%d",&select);
    AddTable(select);
    HashFunction(select);
    printf("Таблица с учетом коллизий(удаляются):\n");
    PrintTable();
    Search();
    return 0;
}