#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
};

// insert node at last
struct Node *insertLast()
{
    int size, i = 1;
    struct Node *temp = NULL, *last = NULL, *node = NULL;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    printf("Enter the list of number: \n");
    while (i <= size)
    {
        node = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &node->data);
        node->previous = NULL;
        node->next = NULL;
        if (temp == NULL)
        {
            temp = node;
            last = node;
            temp->next = node;
            temp->previous = node;
        }
        else
        {
            temp->next = node;
            node->previous = temp;
            last->previous = node;
            node->next = last;
            temp = node;
        }
        i++;
    }
    return last;
}
// print node forward direction

void displayForward(struct Node *last)
{
    struct Node *current = last;
    while (current != last->previous)
    {
        printf("%d <--> ", current->data);
        current = current->next;
    }
    printf("%d <--> \n\n", current->data);
}

// display node backward

void displayBackward(struct Node *last)
{
    struct Node *current = last->previous;
    while (current != last)
    {
        printf("%d <--> ", current->data);
        current = current->previous;
    }
    printf("%d <--> \n\n", current->data);
}
int main()
{

    struct Node *last = insertLast();

    displayForward(last);

    displayBackward(last);

    return 0;
}