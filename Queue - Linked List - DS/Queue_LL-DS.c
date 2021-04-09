#include<stdio.h>
#include<stdlib.h>

int Enqueue();
int Dequeue();
int Display();

struct Queue
{
    int data;
    struct Queue *next;
    struct Queue *pre;
};

typedef struct Queue Que;

Que *enq = NULL;
Que *deq = NULL;
int length;


int main()
{
    int i,n;

    printf("\n\n||***....Queue Data Structures....***||\n");
    printf("1. Enqueue an Element\n2. Dequeue An element\n3. Display elements\n4. Exit\n");
    printf("Enter your Choise..... ");
    scanf("%d",&n);

    while(1)
    {
        switch(n)
        {
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                printf("***....End of Queue....***\n");
                exit(0);
                break;
            default:
                printf("Enter a Valid Choise...!!\n");
        }
    }
    return 0;
}

int Enqueue()
{
    Que *temp,*t;

    temp=(struct Queue *) malloc(sizeof(struct Queue));
    
    printf("Enter data to Enqueue :");
    scanf("%d",&temp->data);
    temp->next = NULL;
    temp->pre = NULL;

    if(enq == NULL && deq == NULL)
    {
        deq=temp;
        enq=temp;
    }
    else 
    {
        while(t->next != NULL)
        temp->next = t;
        
        enq=temp;
    }
}