#include<stdio.h>
int main()
{
    char a[20];

    printf("\n\nEnter a string : ");
    scanf("%s",a);
    
    printf("Character occurance...\n");
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
    printf("\n\n");
    return 0;
}
