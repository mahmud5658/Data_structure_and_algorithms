#include<stdio.h>

void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void swap(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void sort(int arr[],int size){
    int i,j;
    for(i = 0;i<size;i++){
        int min = i;
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            swap(&arr[min],&arr[i]);
        }
    }
}
int main(){
    int arr[] = {40,80,30,20,100,70,10,90,80};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    printarr(arr,size);
    return 0;
}