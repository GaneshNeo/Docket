#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n,res,*a,flag;
    printf("\n\nEnter resultant Value : ");
    scanf("%d",&res);
    printf("Enter Size of an array : ");
    scanf("%d",&n);

    a=(int *) malloc(n * sizeof(int));

    printf("Elements are..!");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Possible pairs are..\n");
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] + a[j] == res)
            {
                flag=1;
                printf("%d + %d = %d\n",a[i],a[j],a[i]+a[j]);
            }
            else if(flag != 1)
            {
                flag=0;
            }
        }
    }
    if(!flag)
    {
        printf("No pairs Found");
    }
    return 0;
}