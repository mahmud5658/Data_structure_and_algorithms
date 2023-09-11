#include<stdio.h>

void merge(int arr[],int temp[],int low,int mid,int high){
    for(int i=low;i<=high;i++){
        temp[i] = arr[i];
    }
    int i = low; int j = mid+1; int k = low;
    while(i<=mid && j<=high){
        if(temp[i]<=temp[j]){
            arr[k] = temp[i];
            i++;
        }else{
            arr[k] = temp[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        arr[k] = temp[i];
        i++;
        k++;
    }
}
void sort(int arr[],int temp[],int low,int high){ 
    if(low<high){
        int mid = low+(high-low)/2;
        sort(arr,temp,low,mid);
        sort(arr,temp,mid+1,high);
        merge(arr,temp,low,mid,high);
    }
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {9,5,2,4,3,2,1,4,6,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp[size];
    sort(arr,temp,0,size-1);
    printarr(arr,size);

    return 0;
}