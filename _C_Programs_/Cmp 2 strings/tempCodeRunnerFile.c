
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
        scanf("%s