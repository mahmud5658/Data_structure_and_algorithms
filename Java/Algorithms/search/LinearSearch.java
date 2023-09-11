package Java.Algorithms.search;

public class LinearSearch {
    public int search(int[] arr,int n,int key){
        for(int i =0;i<n;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] arr = {10,3,5,6,8,40};
        LinearSearch s1 = new LinearSearch();

        int result = s1.search(arr, arr.length, 6);
        if(result==-1){
            System.out.println("Key is not found");
        }else{
            System.out.println("Key is found at index "+result);
        }
    }
}
