// 9.	Write a program to count number of digits in a given integer.

#include<stdio.h>

int main()
{
    int n,r,count=0;
    printf("Enter any numbers : ");
    scanf("%d",&n);

    if(n!=0)
    {
        while(n!=0)
        {
            count++;
            n = n/10;
        }
    }
    else
    {
        count++;
    }
    
    printf("Number of digits : %d",count);
       
    return 0;
}