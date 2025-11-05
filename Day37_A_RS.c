#include<stdio.h>

//ind the sum of each row of a matrix and store it in an array.

int main()
{
    int r,c,i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    int sum[r];
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum[i] = 0;  // Initialize sum for each row
        for(j=0;j<c;j++)
        {
            sum[i] += a[i][j];
        }
    }
    printf("The sum of each row is:\n");
    for(i=0;i<r;i++)
    {
        printf("%d ",sum[i]);
    }
    printf("\n");
    return 0;
}
