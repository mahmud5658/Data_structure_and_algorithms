#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
// insert node at first
void insertatairst(int data){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->next = head;
    head = new_node; 
}
// insert node at end of the linked list

void insertatend(int data){
    struct node *current = head;
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if(head==NULL){
        head = new_node;
        return;
    }
    while(current->next!=NULL){
        current = current->next;
    }
    current->next = new_node;
}
// insert node at given  position
void insertatposition(int data, int position){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if(position==1){
        new_node->next = head;
        head = new_node;
    }else{
        struct node *previous = head;
        int count =1;
        while(count<position-1){
            previous = previous->next;
            count++;
        }
       struct node *current = previous->next;
       previous->next = new_node;
       new_node->next = current;
        
    }
}
// delete node at first
void deleteatfirst(){
    struct node *temp = head;
    head = head->next;
    free(temp);
}

// delete at end of the linekd list

void deleteatlast(){
    struct node *current = head;
    struct node *previous = NULL;
    while(current->next!=NULL){
        previous = current;
        current = current->next;
    }
    previous->next = NULL;
    free(current);
}
// delete node at given position

void deletenodepoistion(int position){
    if(position==1){
        head = head->next;
    }else{
        struct node *previous = head;
        int count = 1;
        while(count<position-1){
            previous = previous->next;
            count++;
        }
        struct node *current = previous->next;
        previous->next = current->next;
        free(current);
    }
}

// search linked list
void search(int key){
    struct node *current = head;
    while(current!=NULL){
        if(current->data == key){
            printf("Data found");
            return;
        }
        current = current->next;
    }
    printf("Data not found");
}
// display linked list
void displaylist(){
    if(head==NULL){
        return;
    }
    struct node *current = head;
    while(current!=NULL){
        printf("%d-->",current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main(){
    insertatairst(10);
    insertatairst(20);
    insertatairst(30);
    insertatairst(40);
    insertatairst(50);
    insertatairst(60);
    insertatairst(70);
    displaylist();
    deleteatfirst();
    deleteatlast();
    insertatend(10);
    insertatposition(100,3);
    deletenodepoistion(4);
    displaylist();
    search(10);
    return 0;
}