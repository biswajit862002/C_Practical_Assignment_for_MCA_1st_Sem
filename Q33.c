// 33.	Write a C program to check whether a number is even or odd using functions.

#include<stdio.h>

int iseven(int);

int main()
{
    int a,res;
    printf("Enter a numbers : ");
    scanf("%d",&a);

    res = iseven(a);

    if(res)
    {
        printf("\n%d is a even number",a);
    }
    else{
        printf("\n%d is a odd number",a);
    }

    return 0;
}

int iseven(int a)
{
    if(a%2 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}