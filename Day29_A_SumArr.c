#include<stdio.h>

//Q57: Find the sum of array elements.


int main()
{
    int n, s = 0;
    printf("Enter Number Of Elements:");
    scanf("%d", &n);

    int a[n];


    for (int i = 0; i < n; i++)
    {
        printf("Enter Elements:");
        scanf("%d", &a[i]);


    }

    for (int j = 0; j < n; j++)
    {
      s = s + a[j];

    }


    printf("Sum is %d \n", s);


    return 0;

}