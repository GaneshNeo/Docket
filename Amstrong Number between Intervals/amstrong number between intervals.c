#include<stdio.h>
#include<math.h>
int amstrong_number(int n)
{
    int i,count=0,temp=n,res=0;
    while(temp != 0)
    {
        count++;
        temp/=10;
    }
    temp=n;
    while(temp != 0)
    {
        res+= pow((temp%10),count);
        temp/=10;
    }
    if(res == n)
    {
        printf("%d\n",res);
    }
}

int main()
{
    int i,a,b;
    scanf("%d %d\n",&a,&b);
    for(i=a;i<=b;i++)
    {
        amstrong_number(i);
    }
    return 0;
}
