#include<stdio.h>
#include<stdlib.h>

int rev_arr_ele(int *a,int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
        a[i]+=a[n-1-i];
        a[n-1-i]=a[i]-a[n-1-i];
        a[i]-=a[n-1-i];
    }
}

int main()
{
    int n,i,*a;
    printf("\n\nEnter size of an array : ");
    scanf("%d",&n);

    a=(int *) malloc(n * sizeof(int));

    printf("Enter Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nInput Array : ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    rev_arr_ele(a,n);

    printf("\nResultant Array : ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}