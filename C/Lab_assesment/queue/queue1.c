

// queue implementation using array
#include <stdio.h>

#define size 5

int arr[size];

int front = 0;
int rear = 0;

int isQueueEmpty()
{
    if (front == rear)
        return 1;
    return -1;
}

void dequeue()
{
    if (isQueueEmpty() == 1)
        printf("Queue is Empty.\n");
    else
    {
        printf("Dequeued element = %d\n", arr[front]);
        front++;
    }
}

int isQueueFull()
{
    if (rear == size)
        return 1;
    return -1;
}

void enqueue(int val)
{
    if (isQueueFull() == 1)
        printf("Queue is Full\n");
    else
    {
        arr[rear] = val;
        rear++;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}