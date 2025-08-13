#include <stdio.h>


int binarySearch(int arr[],int n ,int target){

    int low =0;
    int high =n-1;
    int count =0;

    while(low<=high){

        count++;
        printf("%d %d\n",low,high);

        int mid =(low+high)/2;

        if(arr[mid]==target){
            printf("%d\n",count);
            return mid;
        }else if(arr[mid]<target){
            low =mid+1;
        }else{
            high =mid-1;
        }
    }
}

void swap(int* a,int* b){

    int temp = *a;
    *a =*b;
    *b =temp;
}
void bubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=n-2;j>=i;j--){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){

    int arr[]={1,4,4,5,1,1,4,7,8,9,13};

    //printf("%d",binarySearch(arr,8,9));

    bubbleSort(arr,11);
    print(arr,11);

}