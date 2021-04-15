#include<stdio.h>
#include<stdlib.h>

/*int main()
{
    int i,n,*p;
    printf("Enter the size of an array : ");
    scanf("%d",&n);

    //int *p;

    p=(int *) malloc(n * sizeof(int));  //p=(int *) calloc(n * sizeof(int));  

    for(i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&p[i]);  //&*(p+i)
    }

    printf("\n\nThe elements are ");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }

    free(p);
    return 0;
}*/

int main()
{
    int n=5,*p,**pp;

    //printf("Enter a Number : ");
    //scanf("%d",&n);

    p = &n; // n=1000->5 *p=2000->1000
    **pp = *p; // *p=2000->1000  **pp=3000->2000

    printf("\n\nThe number is %d %d %d\n\n",n,*p,**pp);
    return 0;
}