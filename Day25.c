#include <stdio.h>
int main(){
    float a,b;
    char sign;
    printf("Enter expression:");
    scanf("%f %c %f",&a,&sign,&b);
    if(sign == '+'){
        printf("%f\n",a+b);
    }
    else if(sign == '-'){
        printf("%f\n",a-b);
    }
}