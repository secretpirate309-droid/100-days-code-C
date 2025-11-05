#include<stdio.h>

//Find the transpose of a matrix.

int main()
{
    int r,c,i,j;
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
    printf("The transpose of the matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
