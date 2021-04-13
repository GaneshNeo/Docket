#include<stdio.h>
#include<ctype.h>
#include<string.h>

int cmp_strings(char a[],char b[])
{
    int i,flag=0;
    char m,n;

    for(i=0; (a[i] !='\0') && (b[i] !='\0');i++)
    {       
        m=tolower(a[i]);
        n=tolower(b[i]);

        if(m != n)
        {
            flag=1;
            break;
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
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the First string : ");
        scanf("%s",a);
        printf("Enter the Second string : ");
        scanf("%s",b);
        
        cmp_strings(a,b);
    }
    printf("\n\n");
    return 0;
}
