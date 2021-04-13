#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*a,i,res=9999;
    printf("\n\nDroping Minimum Element in an Array...\n");
    printf("Enter Size of an Array : ");
    scanf("%d",&n);

    a=(int *) malloc(n * sizeof(int));
    
    printf("Enter elements : ");

    for(i=0;i<n*2;i++)
    {   if(i < n)
        {
            scanf("%d",&a[i]);
            if(a[i] < res && i < n)
            {
                res=a[i];
            }
        }
        else if(i >= n)
        {
            if(a[i-n] != res)
            {
                printf("%d ",a[i-n]);
            }
        }
    }
    return 0;
}