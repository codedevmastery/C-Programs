/*
Q. Write a C Program to find the Perimeter or Circumference of Circle with given Radius
*/


#include<stdio.h>
void main()
{
    int radius;
    float perimeter;

    printf("Enter the Radius of the Circle: ");
    scanf("%d", &radius);
    perimeter = 2 * 3.14 * radius;
    printf("The Perimeter of the Circle is %.2f Meters", perimeter);
}

/*
OUTPUT:
Enter the Radius of the Circle: 23
The Perimeter of the Circle is 144.44 Meters
*/
