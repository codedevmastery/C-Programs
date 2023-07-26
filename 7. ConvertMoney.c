/*
Q. Write a C Program to Convert given Money in Dollars to its Equivalent Dollars and Cents.
*/


#include<stdio.h>
void main()
{
    int dollars, cents;

    printf("Enter the Amount of Money: ");
    scanf("%d", &cents);
    dollars = cents / 100;
    cents = cents % 100;
    printf("The Money Equivalent to Dollars and Cents is %d Dollars and %d Cents", dollars, cents);
}

/*
OUTPUT:
Enter the Amount of Money: 245
The Money Equivalent to Dollars and Cents is 2 Dollars and 45 Cents
*/
