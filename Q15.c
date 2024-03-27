// If a four digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.

#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter any numbers : ");
    scanf("%d",&n);

    if(n>999 && n<10000)
    {
        sum = (n%10) + (n/1000);
        printf("Sum of the first and last digit of this number is = %d",sum);

    }
    else{
        printf("Please enter 4 digit number...!!!");
    }

    return 0;
}