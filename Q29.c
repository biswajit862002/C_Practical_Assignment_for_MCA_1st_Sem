// 29.	Write a program to swap two integers using call by value and call by reference methods of passing arguments to a function.

#include<stdio.h>

void swap_with_reference(int *,int *);
void swap_with_value(int p,int q);

int main()
{
    int a,b;
    printf("\n*** Swap With Reference ***\n");

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("\nBefore swaping a=%d,b=%d ",a,b);

    swap_with_reference(&a,&b);

    printf("\nAfter swaping a=%d,b=%d ",a,b);

    printf("\n\n*** Swap With call by value ***\n");

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("Before swaping a=%d,b=%d ",a,b);

    swap_with_value(a,b);

    return 0;
}

void swap_with_reference(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swap_with_value(int p,int q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;

    printf("\nAfter swaping a=%d,b=%d ",p,q);

}