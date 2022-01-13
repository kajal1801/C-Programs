#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *head, *newnode, *temp;
int count = 0;

void insert_Beg(){
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data you want to insert: ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
    count++;
}

void insert_End(){
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data you want to insert: ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    temp = head;
    while(temp->next != 0){
        temp = temp->next;
    }
    temp->next = newnode;
    count++;
    newnode = 0;
}

void insert_AnyPos(){
    int pos;
    printf("Enter the position at which you want to insert the data: ");
    scanf("%d",&pos);
    if(pos>count){
        printf("Invalid Input");
    }
    else if(pos == 1){
        insert_Beg();
    }
    else if(pos == count){
        insert_End();
    }
    else{
        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the data you want to insert: ");
        scanf("%d",&newnode->data);
        int i = 1;
        temp = head;
        while(++i<pos){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        newnode = 0;
    }
}

void delete_beg(){
    temp = head;
    head = head->next;
    free(temp);
}

void delete_end(){
    struct Node *prevnode;
    if(head == 0){
        return;
    }
    temp = head;
    while(temp->next != 0){
        prevnode = temp;
        temp = temp->next;
    }
    if(temp == head){
        head = 0;
    }
    else{
        prevnode->next = 0;
    }
    free(temp);
}

void delete_anyPos(){
    struct Node *nextnode;
    int pos, i = 1;
    temp = head;
    printf("Enter the position: ");
    scanf("%d",&pos);

    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}

void reverse(){
    struct Node *nextnode, *currentnode, *prevnode;
    prevnode = 0;
    currentnode = head;
    nextnode = head;
    while(nextnode !=0){
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}

void display(){
    temp = head;
    while(temp != 0){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }

    printf("NULL\n\n");
}

int main(){
    head = 0;
    int choice = 1;

    while(choice){
        newnode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next = 0;

        if(head == 0){
            head = temp = newnode;
            count++;
        }

        else{
            temp->next = newnode;
            temp = newnode;
            count++;
        }

        printf("Do you want to continue? \nEnter 1 to continue and 0 to end the process: \n");
        scanf("%d",&choice);
    }
    temp = head;
    choice = 5;
    while(choice){ 
        printf("\nEnter 1 to insert a node at the beginning\nEnter 2 to insert a node at the end\nEnter 3 to insert a node at any position\nEnter 4 to delete from beginning of the list\nEnter 5 to delete from the end of the list\nEnter 6 to delete at any position\nEnter 7 to reverse the list\nEnter 8 print the list\nEnter 0 to exit: ");
        scanf("%d",&choice);       
        switch(choice){
            case 0:
            printf("\nThank you!");
                break;
            case 1: 
                insert_Beg();
                break;
            case 2:
                insert_End();
                break;
            case 3: 
                insert_AnyPos();
                break;
            case 4:
                delete_beg();
                break;
            case 5:
                delete_end();
                break;
            case 6:
                delete_anyPos();
                break;
            case 7:
                reverse();
                break;
            case 8:
                display();
                break;
            default:
                printf("Invalid Input");
        }
    }
    

    return 0;
}