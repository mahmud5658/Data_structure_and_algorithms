#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

// display linked list

void display(struct Node *temp)
{

    while (temp != NULL)
    {
        printf("%d-->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// find length of the singly linked list

void length(struct Node *temp)
{
    struct Node *current = temp;
    int length = 0;
    if (current == NULL)
    {
        printf("There is no element");
        return;
    }
    while (current != NULL)
    {
        length++;
        current = current->next;
    }
    printf("The length of the singly linked list: %d\n", length);
}

// insert Node at the end of the linked list
struct Node *insertEnd()
{
    printf("Enter the length of the singly linked list: ");
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int size, i = 1;
    scanf("%d", &size);
    while (i <= size)
    {
        int value;
        temp = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &value);
        temp->data = value;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
        i++;
    }

    return head;
}

// insert node at the beginning of the singly linked list

struct Node *insertFirst()
{
    printf("Enter the length of the singly linked list: ");
    struct Node *head = NULL, *temp = NULL;
    int size, i = 1;
    scanf("%d", &size);
    while (i <= size)
    {
        int value;
        temp = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &value);
        temp->data = value;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        i++;
    }
    return head;
}

int main()
{

    struct Node *head;
    // head = insertFirst();
    head = insertEnd();
    display(head);
    length(head);
}