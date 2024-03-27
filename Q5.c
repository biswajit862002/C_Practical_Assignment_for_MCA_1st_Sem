// 5.	Write a program to input two numbers and display the maximum number.

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("Maximum Number is = %d",a);
    }
    else
    {
        printf("Maximum Number is = %d",b);

    }

    return 0;
}