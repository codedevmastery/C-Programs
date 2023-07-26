/*
Q. Write a C Program to Convert Fahrenheit Temperature into Celsius Degree
*/

#include<stdio.h>
void main()
{
    float fah, cel;

    printf("Enter the Temperature in Fahrenheit: ");
    scanf("%f", &fah);
    cel = (fah - 32) * 5/9;
    printf("The Given Fahrenheit Temperature in Celsius is %.2f Degree Celsius", cel);
}

/*
OUTPUT:
Enter the Temperature in Fahrenheit: 96
The Given Fahrenheit Temperature in Celsius is 35.56 Degree Celsius
*/
