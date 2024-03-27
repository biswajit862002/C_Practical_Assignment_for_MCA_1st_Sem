// Write a program to illustrate the use of unary prefix and postfix increment and decrement operators.

#include<stdio.h>

int main()
{
    int a=10;

    printf("\n*** Illustrate of increment operator ***\n");
    printf("\nprefix of increment a = %d",++a);
    printf("\npostfix of increment a = %d",a++);

    printf("\n*** Illustrate of decrement operator ***\n");
    printf("\nprefix of decrement a = %d",--a);
    printf("\npostfix of decrement a = %d",a--);


    return 0;
}