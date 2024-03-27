// write a program to reverse the array elements in c program.

#include<stdio.h>

int main()
{
    int a[10],i;
    printf("Enter 10 elements in array : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nReverse the array elements are : ");
    for (i = 9; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}