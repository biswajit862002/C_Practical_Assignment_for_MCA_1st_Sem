// Write a program to print number in reverse order with a difference of 2

#include<stdio.h>

int main()
{
    int n;
    printf("Enter any numbers : ");
    scanf("%d",&n);

    printf("\nPrint number in reverse order with a difference of 2\n");
    while (n != 0)
    {
        printf("%d ",n);
        n = n-2;
    }
    

    return 0;
}
