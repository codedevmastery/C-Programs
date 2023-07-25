/*
Q. Write a C Program to Convert the given Celsius Temperature to Fahrenheit
*/


#include<stdio.h>
void main()
{
    int cel;
    float fah;

    printf("Enter the Temperature in Celsius: ");
    scanf("%d", &cel);
    fah = (cel * 1.8) + 32;
    printf("The given Temperature %d Degree Celsius in Fahrenheit is %.1f Degree Fahrenheit", cel, fah);
}

/*
OUTPUT:
Enter the Temperature in Celsius: 36
The given Temperature 36 Degree Celsius in Fahrenheit is 96.8 Degree Fahrenheit
*/
