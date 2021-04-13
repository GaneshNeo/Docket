#include<stdio.h>
int main()
{
    int i,j,n,shift,a[100],temp;
    printf("Enter the number of times array to be shifted : ");
    scanf("%d\n",&shift);
    scanf("%d\n",&n);
    //printf("Enter the %d array elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    printf("Before Shifting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=1;i<=shift;i++)
    {
        for(j=0;j<n-1;j++)
        {
            temp=a[n-1];
            a[n-1]=a[j];
            a[j]=temp;
        }
    }
    printf("\nAfter Shifting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
