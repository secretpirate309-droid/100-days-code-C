#include<stdio.h>

//Delete an element from an array.


int main()
{
    int n, pos, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to delete element: ");
    scanf("%d", &pos);
    if(pos < 0 || pos >= n)
    {
        printf("Invalid position!\n");
        return 1;
    }
    for(i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}