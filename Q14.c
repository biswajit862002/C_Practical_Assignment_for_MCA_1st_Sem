// Write a program to generate a Fibonacci series.

#include<stdio.h>

int main()
{
    int n,i,a=0,b=1,c;
    printf("Enter how many term you want : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        c = a+b;
        printf("%d ",a);
        a = b;
        b = c;
    }
    
    return 0;
}