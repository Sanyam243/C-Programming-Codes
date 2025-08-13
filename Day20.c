#include <stdio.h>

int sum(int n)
{
    if (n <= 0)
    {
        return 0;
    }

    int ans = n + sum(n - 1);

    printf("%d\n", n);
    return ans;
}

int fib(int n){

    //Base Case

    if(n==1 || n==2 ){
        return 1;
    }

    if(n<=0){
        return 0;
    }
    printf("%d\n",n);

    int ans = fib(n-2)+fib(n-1);
    return ans;
}
int main()
{

   // printf("%d", sum(5));
    printf("%d",fib(6));
}