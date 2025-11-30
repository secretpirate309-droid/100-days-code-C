#include<stdio.h>

//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.


int main() 
{
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for (int i = 0; i < n-1; i++) 
    {
        for (int j = 0; j < n-1-i; j++) 
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    if (k >= 1 && k <= n) 
    {
        printf("The %dth smallest element is: %d\n", k, arr[k-1]);
    } 

    else 
    {
        printf("Invalid value of k\n");
    }

    return 0;
}