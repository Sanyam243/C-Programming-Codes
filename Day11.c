#include <stdio.h>

float average(int x,int y, int z){
    float sum = x+y+z;
    sum/=3; //Shortand notation sum =sum/3
    return (x+y+z)/3.0;

}

//level -2

void swap2(int a ,int b){

    int c = a;
    a =b;
    b =c;
}

void swap(int *a ,int *b){

   *a =(*a)+(*b);
   *b = (*a)-(*b);
   *a = (*a)-(*b);
}


void decimalToBinary(int n,int base){

    while(n>0){
        int rem = n%base;
        n =n/base;
        printf("%d",rem);
    }
}



int main(){


 /*   float x =3;
    float y =4;
    float z = 4;
     printf("%0.3f",average(x,y,z));*/


     /*int a = 3;
     int b = 4;

     swap(&a,&b);
    

   
     printf("%d %d",a,b);*/

     decimalToBinary(13,2);



    

}