#include <stdio.h>
#include <stdbool.h>
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
void input(int arr[], int size)
{
    printf("Enter the elemet of the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int arr[size];
    input(arr, size);
    printArr(arr, size);
    printf("Enter the key what you want to find: ");
    int key;
    scanf("%d", &key);
    bool result = search(arr, size, key);
    if (result == false)
    {
        printf("Not found");
    }
    else
    {
        printf("Found");
    }
}