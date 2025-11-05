#include<stdio.h>

//Insert an element in a sorted array at the appropriate position.


int main()
{
    int n, i, j, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &key);
    
    // Find the position to insert the key
    i = n - 1;
    while(i >= 0 && arr[i] > key)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key; // Insert the key at the found position
    n++; // Increase the size of the array

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}