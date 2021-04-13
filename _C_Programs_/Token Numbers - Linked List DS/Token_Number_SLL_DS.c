#include<stdio.h>
#include<stdlib.h>

int create_new_token();
int token_request(int);
int waiting_patients(int);
int appointment_cancellation(int);
int tokens_list();
int pos(int);

struct token
{
    int token;
    struct token *link;
};

typedef struct token tok;
tok *root=NULL;
int length;

int main()
{
    int n,i;
    while(1)
    {
        printf("\n\n1. New patient\n2. Already fixed an appointment(request for Token)\n3. Patients waiting\n4. Appointment Cancellation\n5. List the Tokens\n6. Total number of Tokens\n7. Exit\n"); 
        printf("\nChoose an option : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                create_new_token();
                break;
            case 2:
                printf("Enter your token number : ");
                scanf("%d",&i);
                token_request(i);
                break;
            case 3:
                printf("Enter your token number : ");
                scanf("%d",&i);
                waiting_patients(i);
                break;
            case 4:
                printf("Enter your token number : ");
                scanf("%d",&i);
                appointment_cancellation(i);
                break;
            case 5:
                tokens_list();
                printf("\n\n");
                break;
            case 6:
                printf("\n\nTotal Number of Tokens are %d\n\n",length);
                break;
            case 7:
                printf("**...End of program...**");
                exit(0);
                break;
            default:
                printf("\n\nEnter a valid option\n\n");
        }
    }
    return 0;
}

int create_new_token()
{
    tok *temp,*t=root;
    
    temp=(struct token *)malloc(sizeof(tok));

    if(root == NULL) {
        temp->token=length+1;
        temp->link=NULL;
        root = temp;
        length++;
    }
    else {
        while(t->link != NULL)
        {
            t = t->link;
        }
        temp->token = length+1;
        temp->link = NULL;
        t->link = temp;

        length++;
    }
    printf("\n\nYour Token Number is %d\n",temp->token);
}

int token_request(int value)
{
    tok *temp,*t=root;
    temp=(struct token *) malloc(sizeof(tok));

    if(root == NULL) {
        temp->token = value;
        temp->link = NULL;
        root = temp;

        length++;
    }
    else {
        while(t->link != NULL)
        {
            t = t->link;
        }
        temp->token = value;
        temp->link = NULL;
        t->link = temp;

        length++;
    }
    printf("\n\nYour Token Number is %d\n\n",temp->token);
}

int waiting_patients(int n)
{
    int count=0,flag=0;
    tok *temp=root;

    while(temp != NULL)
    {
        count++;
        flag=0;
        if(temp->token == n)
        {
            flag=1;
            count-=1;
            break;
        }
        temp = temp->link;
    }
    if(flag == 1) {
        printf("\n%d Patients are waiting before your Token Number %d",count,n);
    }
    else {
        printf("\nYour Token Number (%d) not found\n",n);
    }
}

int appointment_cancellation(int value)
{
    int pos_value=pos(value),i=1; 
    tok *temp,*t;

    if(pos_value > length && pos_value != -1)
    {
        printf("\n\nEnter a Valid Token Number\n\n");
    }
    else if(pos_value == 1)
    {
        temp = root;

        root = temp->link;
        temp->link = NULL;
        free(temp);
        printf("\n\nYour Appointment Token Number %d is cancelled...Thank you for your patience...!!!\n\n",value);

        length--;
    }
    else {
        temp = root;
        while(i < pos_value-1)
        {
            temp = temp->link;
            i++;
        }
        t = temp->link;
        temp->link = t->link;
        t->link = NULL;
        free(t);
        printf("\n\nYour Appointment Token Number %d is cancelled...Thank you for your patience...!!!\n\n",value);

        length--;
    }
}

int tokens_list()
{
    tok *temp=root;
    if(length > 0)
    {
        printf("\n\nListing all the available Token Numbers : ");
        while(temp->link != NULL)
        {
            printf("%d ",temp->token);
            temp = temp->link;
        }
        printf("%d",temp->token);
    }
    else
    {
        printf("**...No Appointments...**");
    }
}

int pos(int value)
{
    tok *temp=root;
    int i=0,flag;
    while(temp->link != NULL)
    {
        flag=0;
        i++;
        if(temp->token == value)
        {
            flag=1;
            break;
        }
        temp = temp->link; 
    }
    if(flag == 1)
    {
        return i; 
    }
    else {
        return -1;
    }
}