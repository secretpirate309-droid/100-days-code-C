#include<stdio.h>

//Rotate an array to the right by k positions.

int main()
{
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n; // In case k is greater than n
    int temp[k];
    // Store last k elements in temp array
    for(int i = 0; i < k; i++)
    {
        temp[i] = arr[n - k + i];
    }
    // Shift the rest of the elements to the right
    for(int i = n - 1; i >= k; i--)
    {
        arr[i] = arr[i - k];
    }
    // Copy the temp array elements to the front
    for(int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
    printf("Array after rotating to the right by %d positions: ", k);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}