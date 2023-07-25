/*
Q. Write a C Program to Calculate Area of Triangle whose Base and Height are given.
*/


#include<stdio.h>
void main()
{
    int base, height;
    float area;

    printf("Enter the Base of the Triangle: \n");
    scanf("%d", &base);
    printf("Enter the Height of the Triangle: \n");
    scanf("%d", &height);
    area = 0.5 * base * height;
    printf("The Area of the Triangle is %.1f", area);
}

/*
OUTPUT:
Enter the Base of the Triangle:
23
Enter the Height of the Triangle:
12
The Area of the Triangle is 138.0
*/
