#include<stdio.h>

//Insert an element in an array at a given position.


int main()
{
    int n,arr[100],i,pos,element;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d",&pos);
    printf("Enter the element to be inserted: ");
    scanf("%d",&element);
    
    //Shifting elements to the right
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=element; //Inserting the element at given position
    n++; //Increasing the size of array
    
    printf("Array after insertion: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}