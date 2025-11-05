#include<stdio.h>

//Search for an element in an array using linear search.


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

    int key;
    printf("Enter element to search: ");
    scanf("%d",&key);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Found at index %d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}