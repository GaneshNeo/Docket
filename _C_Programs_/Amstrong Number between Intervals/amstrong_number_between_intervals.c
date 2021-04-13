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

    printf("\nEnter an interval to find Amstrong Numbers Between them : ");
    scanf("%d %d\n",&a,&b);
    
    printf("Amstrong numbers between %d and %d are/is ",a,b);
    for(i=a;i<=b;i++)
    {
        amstrong_number(i);
    }
    
    printf("\n\n");

    return 0;
}
