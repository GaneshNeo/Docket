#include<stdio.h>
int str_cmp(char a[],char b[])
{
    int i,j;
    printf("%d\t%d\n\n",sizeof(a),sizeof(b));
    if(sizeof(a) == sizeof(b))
    {
        for(i=0;i<sizeof(a);i++)
        {
            printf("%d\n",strcmp(a[i],b[i]));
        }
    }
}
int main()
{
    int i,t;
    char a[20],b[20];
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s %s\n",a,b);
        str_cmp(a,b);
    }
    return 0;
}
