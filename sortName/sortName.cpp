#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int SUM(int* pointerA, int n, int sum);
int Mutiple(int* , int , int);
int main()
{
    int n, i, * pointerA, sum = 0, choice, mutiple =1;
    jumper:
    printf("What do you want to do (1=sum 2=multiple) : ");
    scanf("%d", &choice);

    if (choice >0 && choice<=2){

        printf("how many number you have? : ");
        scanf("%d", &n);
        pointerA = (int*)malloc(n * sizeof(int));

        if (pointerA == NULL)
        {
            printf("Error! memory not allocated.");
            exit(0);
        }
        if (choice ==1) {
            printf("***SUM****\nEnter your number to sum: ");

            printf("Sum = %d", SUM(pointerA, n, sum));
        }
        else if (choice ==2) {
            printf("***MULTIPLE****\nEnter your number to multiple: ");

            printf("Multiple = %d", Mutiple(pointerA, n, mutiple));
        }
    }
    else {
        printf("\nYou Enter worng number\n");
        goto jumper;
    }
   return 0;
}
int SUM(int *pointerA,int n,int sum) {
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", pointerA + i);
        sum += *(pointerA + i);
    }
    return sum;
}

int Mutiple(int* pointerA, int n, int mutiple) {
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", pointerA + i);
        mutiple *= *(pointerA + i);
    }
    return mutiple;
}