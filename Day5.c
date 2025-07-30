#include <stdio.h>
int main()
{

    int marks;
    scanf("%d", &marks);

    switch (marks)
    {
    case 100:
        printf("Perfect");
        break;
    case 99:
        printf("Score is 99");
        break;
    default:
        printf("Score is less than 99 ");
    }
}