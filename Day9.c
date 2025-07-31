#include <stdio.h>

int max(int x, int y)
{

    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int maxOfThree(int a, int b, int c)
{

    int d = max(a, b);
    d = max(d, c);
    return d;
}

int main()
{

   /* int n;
    printf("Enter how many number you want to enter\n");

    scanf("%d", &n);

    int maxi = -1;

    for(int i=0;i<n;i++){

        int c;
        scanf("%d",&c);

        maxi = max(maxi,c);


    }

    printf("Max is %d",maxi);*/

    int low,high;
    scanf("%d %d",&low,&high);

    int count =0;

    while(count<5){
        printf("%d\n",low);
        low++;
        count++;
    }

    count =0;
    while(count<5){
        printf("%d\n",high);
        high--;
        count++;
    }



   
}