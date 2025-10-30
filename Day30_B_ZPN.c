#include<stdio.h>

//Count positive, negative, and zero elements in an array.


int main()
{
 int n, p = 0, z = 0, o = 0;

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
      if ( a[j] > 0 )
      {

        p = p + 1;
      }  

      if ( a[j] < 0)
      {

        o = o + 1;
      }

      if ( a[j] == 0)
      {

        z = z + 1;
      }
    }

    printf("Zero is: %d\n", z);
    printf("Positive is:%d\n", p);
    printf("Negative is:%d\n", o);

    

}