#include<stdio.h>

//Find the sum of all elements in a matrix.

int main()
{
    int r,c,i,j,sum=0;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&r,&c);
    int a[r][c];
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
        for(j=0;j<c;j++)
        {
            sum += a[i][j];
        }
    }
    printf("The sum of all elements in the matrix is: %d\n",sum);
    return 0;
}