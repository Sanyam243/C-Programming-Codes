#include <stdio.h>
float CalculateAreaOfCircle(float radius)
{
    const float pi=3.14;
    float area=pi*radius*radius;
    return area;
}
float CalculateAreaOfRectangle(float length, float breadth)
{
    
    float area=length * breadth;
    return area;
}
float CalculateAreaOfSquare(float side)
{
    
    float area=side*side;
    return area;
}

int main(){
    printf("What type of figure's area you want to print\n 1. Rectangle\n2. Square\n 3. Circle\n");
    int choice;
    scanf("%d,&choice");
    if (choice==1)
    {
        float length,breadth;
        printf("Enter Length Of Rectangle and then enter breadth\n");
        scanf("%f %f",&length, &breadth);
        float Area= CalculateAreaOfRectangle(length,breadth);
        printf("Area of Rectangle = %f",Area);
    }
    
}