#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int SUM(int* pointerA, int n, int sum);
int main()
{
    int n, i, * pointerA, sum = 0, choice;
    printf("how many number you have? : ");
    scanf("%d", &n);
    //printf("What do you want to do : 1=sum 2=minus");
    //scanf("%d", &choice);
    //if(choice = 0)
    pointerA = (int*)malloc(n * sizeof(int));

    if (pointerA == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
        
    printf("Enter elements: ");
   
    printf("Sum = %d", SUM(pointerA, n, sum));

  

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