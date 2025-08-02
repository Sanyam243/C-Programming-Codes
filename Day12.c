#include <stdio.h>
int main()
{
    int arr[3]={1,2,3};
    printf("%d\n",arr[2]);
    for (int i=0;i<3;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("%d\n",arr[2]);
}