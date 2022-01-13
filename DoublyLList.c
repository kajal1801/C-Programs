#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *tail;
int count = 1;

void create(){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->prev = NULL, newnode->next = NULL;
    if(head == NULL){
        head = tail = newnode;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        count++;
    }
}

void insert_beg(){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->prev = NULL, newnode->next = NULL;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
    count++;
}

void insert_end(){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->prev = NULL, newnode->next = NULL;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    count++;
}

void insert_atPos(){
    int pos,i=1;
    printf("Enter position: ");
    scanf("%d",&pos);
    if(count < pos || pos<1){
        printf("Invalid Input");
    }
    else if(pos == 1){
        insert_beg();
    }
    else{
        struct node *newnode,*temp;
        temp = head;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->prev = NULL, newnode->next = NULL;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
        count++;
    }
}

void display(){
    struct node *temp;
    temp = head;
    while(temp != NULL){
        printf("%d <-> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n\n");
}

int main(){
    int choice = 1;
    head = tail = NULL;
    while(choice != 0){
        create();
        printf("Do you want to continue: ");
        scanf("%d",&choice);
    }

    choice  = 1;
    while(choice != 0){
        printf("Enter 1 to insert at the beginning\nEnter 2 to insert at end\nEnter 3 to insert at any position\nEnter 4 to display\nEnter 0 to exit: \n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert_beg();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_atPos();
                break;
            case 4:
                display();
                break;
            case 0:
                break;
            default:
                printf("Invalid input");
                break;
        }
    }
    printf("\nThank you");

    return 0;
}