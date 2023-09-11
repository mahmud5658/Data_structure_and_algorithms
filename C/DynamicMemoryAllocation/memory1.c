#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n ,i;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n",n);

    ptr = (int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("Memory not allocated.\n");
        exit(0);
    }else{
        printf("Memoey successfully allocated.\n");
        for(i =0;i<n;i++){
            ptr[i] = i+1;
        }

        printf("The elements of the array are : ");
        for(i=0;i<n;i++){
            printf("%d ",ptr[i]);
        }
    }
}