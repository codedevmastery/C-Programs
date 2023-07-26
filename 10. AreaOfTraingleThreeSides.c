/*
Q. Write a C Program to Calculate Area of Triangle whose Three Sides are Given.
*/

#include<stdio.h>
#include<math.h>
void main()
{
    double area, semi, side1, side2, side3;

    printf("Enter the First Side of Triangle: ");
    scanf("%lf", &side1);
    printf("Enter the Second Side of Triangle: ");
    scanf("%lf", &side2);
    printf("Enter the Third Side of Triangle: ");
    scanf("%lf", &side3);

    semi = (side1 + side2 + side3) / 2;
    area = sqrt(semi * (semi - side1) * (semi - side2) * (semi - side3) );

    printf("The Area of the Triangle is %.2lf Square Metres", area);
}

/*
OUTPUT:
Enter the First Side of Triangle: 23
Enter the Second Side of Triangle: 34
Enter the Third Side of Triangle: 12
The Area of the Triangle is 66.81 Square Metres
*/
