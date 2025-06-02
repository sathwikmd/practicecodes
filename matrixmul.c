#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rows,columns;
    int a[10][10],b[10][10],mul[10][10];
    printf("Enter the no.of rows:\n");
    scanf("%d",&rows);
    printf("Enter the no.of columns:\n");
    scanf("%d",&columns);
    printf("Enter the elements of the first matrix:\n");
    for(int i=0;i<columns;i++)
    {
        for( int j=0;j<rows;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(int i=0;i<columns;i++)
    {
        for( int j=0;j<rows;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<columns;i++)
    {
        for( int j=0;j<rows;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<columns;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }

    }
    for(int i=0;i<rows;i++)
    {
        printf("\n");
        for(int j=0;j<columns;j++)
        {
            printf("%d\t",mul[i][j]);
        }
    }
    return 0;
}    
