#include<stdio.h>
int main()
{
    int i,n,a[30];
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sum of last 3 elements in an array is %d",a[n-1]+a[n-2]+a[n-3]);
    return 0;
}
