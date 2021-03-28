#include<stdio.h>
int main()
{
    int n,i,a[20],res=0;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        res+=a[i];
    }
    printf("Sum of elements in the given array is %d",res);
    return 0;
}
