#include<stdio.h>

int common_elemets(int a[],int b[][],int n)
{
    int i,j,c[50];
    for(i=0;i<3,i++)
    {
        for(j=0;j<n;j++)
        if(b[i][j] == )
    }
}

int least_no_of_elements(int a[],int b[][])
{
    int res;
    if((a[0] >= a[1]) && (a[0] >= a[2])
    {
        res=a[0];
    }
    else if((a[1] >= a[2]) && (a[1] >= a[0]))
    {
        res=a[1];
    }
    else
    {
        res=a[2];
    }
    common_elements(a,b,res);
}
int main()
{
    int i,j,a[3],b[3][20];
    for(i=0;i<3;i++)
    {
        scanf("%d\n",&a[i]);
        for(j=0;j<a[i];j++)
        {
            scanf("%d\n",b[i][j]);
        }
    }
    least_no_of_elements(a,b);
    return 0;
}
