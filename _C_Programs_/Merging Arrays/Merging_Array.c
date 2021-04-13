#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,i,*a,*b,*res;
    printf("\n\nMerging 2 Arrays....");
    printf("\nEnter size of Array 1 : ");
    scanf("%d",&n);
    printf("Enter size of Array 2 : ");
    scanf("%d",&m);

    a=(int *) malloc(n * sizeof(int));
    b=(int *) malloc(m * sizeof(int));
    res=(int *) malloc((n+m) * sizeof(int));

    printf("Enter %d elements for First Array : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter %d elements for Second Array : ",m);
    for(i=0;i<n+m;i++)
    {
        if(i < m)
        {
            scanf("%d",&b[i]);
            if(i < n)
            {
                res[i]=a[i];
            }
            else
            {
                res[i]=b[i-n];
            }
        }
        else
        {
            res[i]=b[i-m];
        }
    }

    printf("Resultant Array : \n");
    for(i=0;i<n+m;i++)
    {
        printf("%d ",res[i]);
    }
    return 0;
}