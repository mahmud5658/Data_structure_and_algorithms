#include<stdio.h>
void swap(int *p1,int *p2){
    int temp = *p1; 
    *p1 = *p2;
    *p2 = temp;
}
//bubbleSort
void bubbleSort(int arr[],int size){
    int i,j;
    int swaped;
    for(i=0;i<size-1;i++){
        swaped = 0;
        for(j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swaped = 1;
            }
        }
        if(swaped == 0){
            break;
        }
    }
}
void printArr(int arr[],int size){
    int i;
    for(i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {10,40,70,60,30,30,20};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);
    printArr(arr,size);

}