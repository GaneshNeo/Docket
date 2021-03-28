#include<stdio.h>
int main()
{
    int n,res=0,i,a[20];
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2 != 0)
        {
            res+=a[i];
        }
    }
    printf("Sum of all off number is an array is %d",res);
    return 0;
}
