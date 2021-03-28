#include<stdio.h>
int unique(int a[],int n)
{
    int i,j,fres=0,tres=0,dup,count=1;
    for(i=0;i<n;i++)
    {
        dup=a[i];
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count == 1)
            {
                if(tres < fres)
                {
                    fres=tres;
                }
            }
    }
    printf("\n\n%d\n\n",fres);
}
int sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    unique(a,n);
    /*for(i=0;i<n;i++)
    {

        printf("%d\n",a[i]);
    }*/
}
int main()
{
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    sort(a,n);

}
