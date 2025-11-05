#include<stdio.h>

//Search in a sorted array using binary search.


int main()
{
    int n,arr[100],i,search,first,last,mid,found=0;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements in sorted order:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&search);
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]==search)
        {
            found=1;
            break;
        }
        else if(arr[mid]<search)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    if(found==1)
    {
        printf("Element %d found at position %d\n",search,mid+1);
    }
    else
    {
        printf("Element %d not found in the array\n",search);
    }
    return 0;
}