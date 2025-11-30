#include<stdio.h>


//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.


void mergeSortedArrays(const int arr1[], int m, const int arr2[], int n, int mergedArr[])
{
    
    int i = 0, j = 0, k = 0;

   
    while (i < m && j < n) 
    {
      
        if (arr1[i] <= arr2[j]) 
        {
            mergedArr[k] = arr1[i];
            i++;
        } 
        else 
        {
           
            mergedArr[k] = arr2[j];
            j++;
        }
        
        k++;
    }

    
    while (i < m) 
    {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }

    
    while (j < n) 
    {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}


int main() 
{
    int m, n; 
    int i;    

  
    printf("Enter the size of the first sorted array (m): ");
   
    if (scanf("%d", &m) != 1 || m <= 0) 
    {
        printf("Invalid size entered. Exiting.\n");
        return 1;
    }

    int arr1[m];
    printf("Enter %d elements for the first array (MUST be sorted):\n", m);
    for (i = 0; i < m; i++) 
    {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr1[i]) != 1) 
        {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

    printf("\nEnter the size of the second sorted array (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid size entered. Exiting.\n");
        return 1;
    }

    int arr2[n];
    printf("Enter %d elements for the second array (MUST be sorted):\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr2[i]) != 1) 
        {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

   
    int total_size = m + n;
    
    int mergedArr[total_size];

    printf("\nMerging the two sorted arrays...\n");
    mergeSortedArrays(arr1, m, arr2, n, mergedArr);

    printf("\nMerged Sorted Array:\n");
    printf("[");
    for (i = 0; i < total_size; i++) 
    {
        printf("%d", mergedArr[i]);
        if (i < total_size - 1) 
        {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}