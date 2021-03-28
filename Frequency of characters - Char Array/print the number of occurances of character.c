#include<stdio.h>
int main()
{
    char a[20];
    scanf("%s",a);
    for(int i=0;a[i] != '\0';i++)
    {
        int count=0;
        for(int j=0;a[j] != '\0';j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        printf("%c = %d\n",a[i],count);
    }
}
