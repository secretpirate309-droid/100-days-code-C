#include<stdio.h>

//Find the maximum and minimum element in an array.

int main()
{
    int n, m1, m2;
    printf("Enter Number Of Elements:");
    scanf("%d", &n);

    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter Elements:");
        scanf("%d", &a[i]);
    }

    m1 = a[0];
    m2 = a[1];



    for (int i = 0; i < n; i++)
    {
        if ( a[i] > m1 )
        {
            m1 = a[i];
        }

        if ( a[i] < m2)
        {

            m2 = a[i];
        }



    }

    printf("Maximum Element is: %d \n", m1);

    printf("Minimum Elememt is: %d \n", m2);

}