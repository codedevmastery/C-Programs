/*
Q. Write a C Program to Subtract Two Numbers
*/

#include<stdio.h>
void main()
{
    int num1, num2, sub;

    printf("Enter the First Number: ");
    scanf("%d", &num1);
    printf("Enter the Second Number: ");
    scanf("%d", &num2);
    sub = num1 - num2;
    printf("The Subtraction of %d and %d is %d", num1, num2, sub);
}

/*
OUTPUT:
Enter the First Number: 45
Enter the Second Number: 34
The Subtraction of 45 and 34 is 11
*/
