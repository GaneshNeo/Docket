#include<stdio.h>
int main()
{
    int i,j,k,r1,c1,r2,c2;
    int a[10][10],b[10][10],c[10][10];

    printf("\nMultiplication of 2 Matrices : \n");
    printf("Enter first matrix rows and columns : \n");
    scanf("%d %d",&r1,&c1);
    printf("Enter second matrix row and columns : \n");
    scanf("%d %d",&r2,&c2);
    if(c1 == r2)
    {
        printf("Enter First Matrix Elements : \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter Second Matrix Elements : \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        //Matrix multiplication
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

        printf("Product of two matrices is : \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Enter a valid size of two matrices.\n");
    }
    return 0;
}