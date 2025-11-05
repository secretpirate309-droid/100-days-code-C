#include<stdio.h>

//Check if the elements on the diagonal of a matrix are distinct.


int main()
{
    int matrix[10][10],i,j,rows,cols,flag=0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(i==j)
            {
                for(int k=i+1;k<rows;k++)
                {
                    if(matrix[i][j]==matrix[k][k])
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
    }
    if(flag==1)
    {
        printf("The elements on the diagonal are not distinct.\n");
    }
    else
    {
        printf("The elements on the diagonal are distinct.\n");
    }
    return 0;
}