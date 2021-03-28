#include<stdio.h>
#include<ctype.h>

int cmp_strings(char a[],char b[])
{
    int i,flag=0;
    char m,n;

    for(i=0; (a[i] !='\0') && (b[i] !='\0');i++)
    {
            if(tolower(a[i]) != tolower(b[i]))
            {
                flag=1;
            }
    }
    if(flag == 0)
    {
        printf("Strings are Equal\n");
    }
    else
    {
        printf("Strings are not Equal\n");
    }
}

int main()
{
    int i,n;
    char a[20],b[20];
    
    printf("\n\nEnter no of Testcases : ");
    scanf("%d\n",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the First string : ");
        scanf("%s\n",a);
        printf("Enter the Second string : ");
        scanf("%s\n",b);
        
        cmp_strings(a,b);
    }
    printf("\n\n");
    return 0;
}
