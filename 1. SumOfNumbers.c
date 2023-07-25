/*
Q. Write a C Program calculate the Sum of Two Numbers
*/


#include<stdio.h>
void main()
{
    int num1, num2, sum;

    printf("Enter the Two Numbers: \n");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("The Sum %d and %d is %d", num1, num2, sum);
}

/*
OUTPUT:
Enter the Two Numbers:
34 12
The Sum 34 and 12 is 46
*/



