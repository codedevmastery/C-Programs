/*
Q. Write a C Program to Calculate the Area of a Circle with given Radius
*/


#include<stdio.h>
void main()
{
    int radius;
    float area;

    printf("Enter the Radius of Circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("The Area of the Circle is %.1f Sq. Metres", area);
}

/*
OUTPUT:
Enter the Radius of Circle: 12
The Area of the Circle is 452.2 Sq. Metres
*/




