/*
Q. Write a C Program to Swap two Integers with the help of Third Variable
*/


#include<stdio.h>
void main()
{
    int num1, num2, temp;

    printf("Enter the First Number: ");
    scanf("%d", &num1);
    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    printf("Before Swapping the Numbers are %d and %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swapping the Numbers are %d and %d", num1, num2);
}

/*
OUTPUT:
Enter the First Number: 23
Enter the Second Number: 45
Before Swapping the Numbers are 23 and 45
After Swapping the Numbers are 45 and 23
*/
