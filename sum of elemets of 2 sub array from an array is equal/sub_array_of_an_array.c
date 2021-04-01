#include<stdio.h>
#include<stdlib.h>

int sum_of_ele(int a[])
{
    int i,t=0;
    for(i=0;a[i] != '\0';i++)
    {
        t+=a[i];
    }
    return t;
}


int splitting_array(int a[],int n,int p)
{
    int i,j,k,*res1,*res2;

    j=k=0;

    res1=(int *) malloc(n * sizeof(int));
    res2=(int *) malloc(n * sizeof(int));

    for(i=0;i<p;i++)
    {
        res1[j++]=a[i];
    }
    for(i=p+1;i<n;i++)
    {
        res2[k++]=a[i];
    }

    res1[j]=res2[k]='\0';

    j=sum_of_ele(res1);
    k=sum_of_ele(res2);

    if(j == k)
    {
        printf("Yes\n");
        for(i=0;res1[i] != '\0';i++)
            printf("%d ",res1[i]);
        
        printf("\n");
        
        for(i=0;res2[i] != '\0';i++)
            printf("%d ",res2[i]);
        
        free(res1);
        free(res2);
    }
    else
    {
        return 0;
    }
}

int sub_arrs(int a[],int n)
{
    int i,res,flag=1;

    for(i=0;i<n;i++)
    {   
        res=splitting_array(a,n,i);
        if(res)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }

    if(flag == 0)
    {
        printf("No");
        printf("\nsub strings");
    }
}

int main()
{
    int i,n,*a;
    
    printf("\n\nEnter the size of an array : ");
    scanf("%d",&n);

    a=(int *) malloc(n * sizeof(int));
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    sub_arrs(a,n);
    return 0;
}