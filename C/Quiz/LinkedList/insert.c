#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;
// insert node at last

void insertion(){
    int size,i=1,data;
    printf("Enter the size of the linked list: ");
    scanf("%d",&size);
    struct Node *current=NULL;
    printf("Enter the element: \n");
    while(i<=size){
        struct Node *node = (struct Node*)malloc(sizeof (struct Node));
        scanf("%d",&data);
        node->data = data;
        node->next = NULL;
        if(head==NULL){
            head = node;
        }else{
            current = head;
            while(current->next!=NULL){
                current = current->next;
            }
            current->next = node;
        }
        i++;
    }
}
void insertFirst(){
    int size,i=1;
    printf("Enter the size of the linked list: ");
    scanf("%d",&size);
    while(i<=size){
        struct Node *node = (struct Node*) malloc(sizeof(struct Node));
        scanf("%d",&node->data);
        node->next = NULL;
        node->next = head;
        head = node;
        i++;
    }
}

// delete node at last 
void deletion(){
    struct Node *current = head;
    struct Node *previous = NULL;
    while(current->next!=NULL){
        previous = current;
        current = current->next;
    }
    previous->next = NULL;
    free(current);
}

// search from linked list 

void search(int data){
    struct Node *current = head;
    while(current!=NULL){
        if(current->data==data){
            printf("Finded");
        }
        current = current->next;
    }
}

// display linked list
void display(){
    struct Node *current = head;
    printf("Entered Linked list: \n");
    while(current!=NULL){
        printf("%d-->",current->data);
        current = current->next;
    }
    printf("\n");
}
int main(){
    insertFirst();
    // insertion();
    display();
    // deletion();
    // display();
    // search(4);
    return 0;
}