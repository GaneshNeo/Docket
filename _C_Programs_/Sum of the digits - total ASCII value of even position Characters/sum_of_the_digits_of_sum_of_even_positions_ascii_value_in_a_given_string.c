#include<stdio.h>
#include<string.h>
int sumofdigits(int n)
{
    int t=0;
    while(n != 0)
    {
        t+=n%10;
        n/=10;
    }
    return t;
}
int main()
{
    int res=0,i;
    char str[20];
    printf("Enter a string : ");
    scanf("%[^\n]%*c",str);
    for(i=0;i<strlen(str);i++)
    {
        if(i%2 == 0)
        {
            res+=str[i];
        }
    }
    printf("\nSum of even position ASCII value of string is %d",res);
    printf("\n\nSum of the digits of the total ASCII value of EVEN position strings is %d\n",sumofdigits(res));
    return 0;
}
