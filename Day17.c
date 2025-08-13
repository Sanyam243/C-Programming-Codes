#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    
    int a =5;

    int* b = &a;
    char c ='a';
    char* ptr = &c;
    printf("%p\n",ptr);
    ptr++;
    printf("%p\n",ptr);

    
   // int **c = &b;

    

    //printf("%d\n",a);
    //printf("%p\n",b);
    //printf("%p",c);

}