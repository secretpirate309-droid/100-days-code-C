#include<stdio.h>

//Read and print elements of a one-dimensional array.


int main()
{
    int n;
    printf("Enter Number Of Elements:");
    scanf("%d", &n);


    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Elements:");
        scanf("%d", &a[i]);
    }

    printf("Elements Of Array are:\n");

    for (int j = 0; j < n; j++)
    {
        printf("%d \n", a[j]);
    }
}