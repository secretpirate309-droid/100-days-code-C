#include<stdio.h>

//Reverse an array without taking extra space.

int main()
{
    int n;
    printf("Enter Number of elements in the array: ");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element : ");
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}