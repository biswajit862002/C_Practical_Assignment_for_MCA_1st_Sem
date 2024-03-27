// write a program to print the sum of digits of a number using for loop

#include<stdio.h>

int main()
{
    int n,rem,sum=0;
    printf("Enter any numbers : ");
    scanf("%d",&n);

    for (;n != 0;n = n/10)
    {
        rem = n%10;
        sum = sum + rem;
    }
    
    printf("Sum of digit of a number is = %d",sum);

    return 0;
}