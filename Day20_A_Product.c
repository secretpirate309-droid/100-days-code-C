 #include<stdio.h>

//Write a program to find the product of odd digits of a number.

int main()
{
    int n, r,  p = 1;

    printf("Enter Digit:");
    scanf("%d", &n);


    

    while(n)
    {
        r = n % 10;

        

        if ( r % 2 != 0)
        {
            p = p * r;
        }

        n = n / 10;
    }

    printf("Product is : %d \n", p);
}

