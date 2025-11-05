#include<stdio.h>

//Merge two arrays.


int main()
{
    int n, m;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    int arr1[n];
    
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d of first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);
    int arr2[m];

    for(int i = 0; i < m; i++)
    {
        printf("Enter element %d of second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int ms = n + m;
    int merged[ms];

    for(int i = 0; i < n; i++)
    {
        merged[i] = arr1[i];
    }
    for(int i = 0; i < m; i++)
    {
        merged[n + i] = arr2[i];
    }

    printf("Merged array: ");
    for(int i = 0; i < ms; i++)
    {
        printf("%d ", merged[i]);
    }
}