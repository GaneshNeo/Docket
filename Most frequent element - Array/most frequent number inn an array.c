#include<stdio.h>
int most_frequent_element(int a[],int n)
{
    int i,j,count,res_count=0,res=0;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        if(count > res_count)
        {
            res_count=count;
            res=a[i];
        }
    }
    if((res != 0) && (res_count != 0))
        return res;
    else
        return (-1);
}
int main()
{
    int i,n,res;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    res=most_frequent_element(a,n);
    printf("%d\n",res);
    return 0;
}
