#include<stdio.h>

//Check if a matrix is symmetric.


int main()
{
    int r,c,i,j,flag=1;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter elements of matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(r!=c)
    {
        printf("Matrix is not symmetric.\n");
        return 0;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");
    return 0;
}