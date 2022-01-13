#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct std
{
     int enrollid;
    char name[100];
    struct std*next;
}*head;
void insert(int enrollid,char*name)
{
    struct std*std = (struct std*)malloc(sizeof(struct std));
    std ->enrollid = enrollid;
    strcpy(std->name,name);
    std -> next = NULL;
    if(head == NULL)
    {
        head = std;
    }
    else
    {
        std -> next = head;
        head = std;
    }
}
void search (int enrollid)
{
    struct std* temp = head;
    while(temp!=NULL)
    {
       if(temp ->enrollid == enrollid)
       {
           printf("\n Enrollment id : %d",temp ->enrollid);
           printf("\n Name : %s",temp ->name);
           return;
       }
       temp = temp->next;
    }
    printf("\n Student with %d enrollment id is not found",enrollid);
}
void update(int enrollid)
{
    struct std*temp = head;
    while(temp!=NULL)
    {
        if(temp->enrollid == enrollid)
        {
            printf("\nEnter the new name : ");
            scanf("%s",temp->name);
            return;
        }
        temp = temp->next;
    }
    printf("\n Student with %d enrollment id is not found",enrollid);
}
void Delete(int enrollid)
{
    struct std*temp1 = head;
    struct std*temp2 = head;
    while(temp1!=NULL)
    {
        if(temp1->enrollid==enrollid)
        {
            printf("\n Record not found");
        if(temp1 == temp2)
        {
            head = head->next;
            free(temp1);
        }
        else
        {
            temp2->next=temp1->next;
            free(temp1);
        }
        printf("\n Record deleted");
        return;
    }
    temp2=temp1;
    temp1=temp1->next;
    }
}
void display()
{
   struct std*temp = head;
    while(temp!=NULL)
    {
        printf("\n Enrollment id : %d",temp->enrollid);
        printf("\n Name :%s",temp->name);
        temp = temp->next;
    }
}
int main()
{
    head = NULL;
    int choice;
    char name[100];
    int enrollid;
    printf("\n1. Insert student details");
    printf("\n2. Search for students");
    printf("\n3. Delete student details");
    printf("\n4. Update student details");
    printf("\n5. Display");
    do
    {
        printf("\n Enter Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter enrollment id : ");
            scanf("%d",&enrollid);
            printf("Enter the name : ");
            scanf("%s",&name);
            insert(enrollid,name);
            break;
        case 2:
            printf("Enter the enrollment id to search for:");
            scanf("%d",&enrollid);
            search(enrollid);
            break;
        case 3:
            printf("Enter enrollment id that is to be deleted : ");
            scanf("%d",&enrollid);
            Delete(enrollid);
            break;
        case 4:
            printf("Enter the enrollment id to update : ");
            scanf("%d",&enrollid);
            update(enrollid);
            break;
       case 5:
           display();
           break;
        }

    } while (choice != 0);
}