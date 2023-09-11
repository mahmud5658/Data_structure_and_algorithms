#include<stdio.h>
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j = i -1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[] = {20,40,50,10,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    printarr(arr,size);
}