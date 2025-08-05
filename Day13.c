#include <stdio.h>


int max(int a,int b){
  /*  if(a>b){
        return a;
    }else{
        return b;
    }*/

    //Mentos
     return a>b?a:b;
}

int min(int a,int b){
    return a<b?a:b;
}

int findMaximum(int arr[],int n){
    int maxi = arr[0];

    for(int i=1;i<n;i++){
      if(maxi<arr[i]){
        maxi =arr[i];
      }
    }

    return maxi;
}

int findMinimum(int arr[],int n){
    int mini = arr[0];

    for(int i=1;i<n;i++){
      mini =min(mini,arr[i]);
    }

    return mini;
}


int main(){

   /* int marks[][4]= {{2,3,4,5},{1},{5}};

    for(int i =0;i<2;i++){
        for(int j=0;j<3;j++){
            //printf("Enter the marks for %dth student for %dth subject\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }*/

   /*  for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    } */

    int arr[]={1,-2,5,3,0,100};
    printf("The maximum in array %d and minimum in array is %d",findMaximum(arr,5),findMinimum(arr,5));
}