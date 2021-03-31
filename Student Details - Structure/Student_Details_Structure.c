#include<stdio.h>

struct student
{
    int rollnum;
    float marks[5],total;
    char name[50];
};

int main()
{
    struct student stu[20];
    int i,n;
    printf("\n\nEnter the Number of Student... : ");
    scanf("%d",&n);

    printf("\nEnter the Details...\n\n");


    for(i=0;i<n;++i)
    {
        stu[i].total=0;

        printf("Name of Student %d : ",i+1);
        scanf("%s",stu[i].name);
        
        printf("Roll Number (int Format) : ");
        scanf("%d",&stu[i].rollnum);
        
        printf("Enter marks scored by student %d in 5 Subjects...\n\n",i+1);
        
            printf("Digital Circuits : ");
            scanf("%f",&stu[i].marks[0]);

            stu[i].total+=stu[i].marks[0];

            printf("Medical Electronics : ");
            scanf("%f",&stu[i].marks[1]);

            stu[i].total+=stu[i].marks[1];

            printf("Circuit Analysis : ");
            scanf("%f",&stu[i].marks[2]);

            stu[i].total+=stu[i].marks[2];

            printf("Linear Integrated Circuits : ");
            scanf("%f",&stu[i].marks[3]);

            stu[i].total+=stu[i].marks[3];

            printf("Electronic Devices : ");
            scanf("%f",&stu[i].marks[4]);

            stu[i].total+=stu[i].marks[4];
            printf("\n");
    }
    
    printf("Student Details....\n\n");

    printf("Name\tRoll Number\tDC\tME\tCA\tLIC\tED\taverage\ttotal\n\n");

    for(i=0;i<n;i++)
    {
        
        printf("%s\t%d\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n\n",stu[i].name,stu[i].rollnum,stu[i].marks[0],stu[i].marks[1],stu[i].marks[2],stu[i].marks[3],stu[i].marks[4],(stu[i].total)/5.0,stu[i].total);
    }

    return 0;
}