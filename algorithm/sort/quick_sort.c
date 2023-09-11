#include<stdio.h>

void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low;
    int j = low;
    while(i<=high){
        if(arr[i]<=pivot){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j]  = temp;
            j++;
        }
        i++;
    }
    return j-1;
}
void sort(int arr[],int low,int high){
    if(low<high){
        int p = partition(arr,low,high);
        sort(arr,low,p-1);
        sort(arr,p+1,high);
    }
}
int main(){
    int arr[] = {10,30,50,60,20,70,60,40,80,100,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,0,size-1);

    sort(arr,0,size-1);
    printarr(arr,size);
    return 0;
}