// 32.	Write a C program to find maximum and minimum between two numbers using functions.

#include<stdio.h>

int max(int,int);
int min(int,int);

int main()
{
    int a,b,res1,res2;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

     res1 = max(a,b);
     res2 = min(a,b);

     printf("\nMaximum number is = %d",res1);
     printf("\nMinimum number is = %d",res2);

    return 0;
}

int max(int a,int b)
{
    return(a>b?a:b);
}

int min(int a,int b)
{
    return(a<b?a:b);
}