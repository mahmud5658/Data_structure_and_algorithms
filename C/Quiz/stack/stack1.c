#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    printf("Enter the number a and b: ");
    scanf("%d%d",&a,&b);
    printf("Before swaping: %d %d\n",a,b);
    swap(&a,&b);
    printf("After swaping: %d %d\n",a,b);
}