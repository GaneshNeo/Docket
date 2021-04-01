#include<stdio.h>
#include<stdlib.h>

struct student
{
    int rollnum;
    float marks[5],total;
    char name[50];
};

int main()
{
    struct student *stu;
    int i,n,j;
    printf("\n\nEnter the Number of Student... : ");
 -   scanf("%d",&n);

    stu=(struct student *) malloc(n * sizeof(struct student));

    printf("\nEnter the Details...\n\n");

    for(i=0;i<n;i++)
    {
        (stu+i)->total=0;
        //syu[i].total = 0;
        //*(stu+i).total = 0;

        printf("Name of Student %d : ",i+1);
        scanf("%s",stu[i].name);
        
        printf("Roll Number (int Format) : ");
        scanf("%d",&stu[i].rollnum);
        
        printf("Enter marks scored by student %d in 5 Subjects...\n\n",i+1);
        
        for(j=0;j<5;j++)
        {
            printf("Enter the subject %d marks : ",j+1);
            scanf("%f",&stu[i].marks[j]);

            printf("\n");
            stu[i].total+=stu[i].marks[j];
        }
    }
    
    printf("Student Details....\n\n");

    printf("Name\tRoll Number\tDC\tME\tCA\tLIC\tED\taverage\ttotal\n\n");

    for(i=0;i<n;++i)
    {
        
  -      printf("%s\t%d\t\t",stu[i].name,stu[i].rollnum);
        for(j=0;j<5;j++)
        {
            printf("%.2f\t",stu[i].marks[j]);
        }
        printf("%.2f\t%.2f\t\n\n",(stu[i].total)/5,stu[i].total);
    }

    return 0;
}+