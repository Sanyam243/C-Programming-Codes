#include <stdio.h>
#include <string.h>
#include <math.h>

int strlenCustom(char arr[])
{
    int i = 0;

    while (arr[i] != '\0')
    {
        i++;
    }

    return i;
}

void reverseString(char s[])
{

    int n = strlenCustom(s);

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}
int main()
{
    /*
        char name[50];
        scanf("%s",name);
        printf("%s",name);
       const int n =5;
        int arr[n];

        int val = pow(2,3);
        printf("%d",val);*/

    //  char arr[58] ="abc";

    // printf("%d",strlenCustom(arr));

    char name[50];
    scanf("%s", name);
   reverseString(name);
}