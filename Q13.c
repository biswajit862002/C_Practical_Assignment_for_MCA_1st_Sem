// write a program to check whether a number is palindrome or not.

#include<stdio.h>

int main()
{
    int n,rem,sum=0,temp;
    printf("Enter any numbers : ");
    scanf("%d",&n);
    temp = n;

    while(n != 0)
    {
        rem = n%10;
        sum = sum * 10 + rem;
        n = n/10;
    }

    if(temp == sum)
    {
        printf("%d is a Palindrome number.",temp);
    }
    else{
        printf("%d is not a Palindrome number.",temp);
    }
    return 0;
}