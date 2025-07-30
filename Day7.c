#include <stdio.h>
int main()
{
    int flag = 0;

    int n;
    printf("Enter number you want to check whether prime or not \n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
        
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("The number is prime");
    }
    if (flag == 1)
    {
        printf("The number is not prime");
    }
    return 0;
}