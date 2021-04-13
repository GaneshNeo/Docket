#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,temp,res;
    temp=res=0;

    char str[20];
    printf("\n\nProgram to find Largest 3 Digit Number\nEnter some Numbers : ");
    scanf("%s",str);

    for(i=0;i<strlen(str)-2;i++) //123456789
    {
        int flag=0;
        temp=0;
        for(j=i;j<i+3;j++)
        {
            if(str[j] >= '0' && str[j] <= '9')
            {
                flag=1;
                temp+=(str[j] - '0');
                temp*=10; 
            }
            else {
                flag=0;
                break;
            }       
        }
        if(temp > res && flag ==1)
        {
            temp/=10;
            res=temp;
        }
    }
    printf("Largest 3 digit number in %s is %d",str,res);
    return 0;
}