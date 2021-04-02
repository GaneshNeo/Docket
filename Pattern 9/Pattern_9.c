#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("\n\nEnter the number of Rows : ");
    scanf("%d",&n);

    printf("||__Patter Number 9__||\n\n");
    for(i=0;i<n;i++)
    {
        temp=i+1;
        for(j=0;j<=i;j++)
        {
            printf("%d ",temp);
            temp+=n;
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}