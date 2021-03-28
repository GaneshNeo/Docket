#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[50],res[50],temp;
    printf("Enter a string:\n");
    scanf("%[^\n]%*c",str);
    for(int i=0;i<strlen(str);i++) 
    {
        res[i]=str[i];
        if(str[i] != ' ')
        {
            int count=0;
            for(int j=0;j<strlen(str);j++)
            {
                if(str[j] != ' ')
                {
                    if(str[i] == str[j])
                    {

                        count++;
                        if(count >= 2)
                        {
                            temp=str[i];
                            break;
                        }
                    }
                }
            }
            printf("\n%c = %d",str[i],count);
            if(count >= 2)
            {
                for(int j=0;j<strlen(str);j++)
                {
                    if(temp == str[j])
                    {
                        res[j]=toupper(str[j]);
                    }
                }
                temp='\0';
            }
        }
    }
    printf("String after statements: \n%s",res);
}
