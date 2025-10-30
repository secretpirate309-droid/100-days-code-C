#include<stdio.h>

//Count even and odd numbers in an array.


int main()
{
    int n, e = 0, o = 0;

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
        if ( a[j] % 2 == 0 )
        {
            e = e + 1;
        }

        if ( a[j] %2 != 0 )
        {
            o = o + 1;
        }

    }


    printf("Even is: %d\n", e);
    printf("odd is: %d\n", o);

}
