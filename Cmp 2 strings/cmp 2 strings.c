#include<stdio.h>
#include<string.h>
int cmp_strings(char a[],char b[])
{
    printf("%s %s\n",a,b);
    printf("%d %d\n",sizeof(a),sizeof(b));
    int i,flag=0;
    char m,n;
    for(i=0; (a[i] !='\0') && (b[i] !='\0');i++)
    {
            printf("%c %c\n",a[i],b[i]);

            m=strlwr(a[i]);
            n=strlwr(b[i]);

            printf("%c %c\n\n",a[i],b[i]);
            if(n != m)
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
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %s",a,b);
        printf("%s %s\n",a,b);
        printf("%d %d\n",sizeof(a),sizeof(b));
        cmp_strings(a,b);
    }
    return 0;
}
