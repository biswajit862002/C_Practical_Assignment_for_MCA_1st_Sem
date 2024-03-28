// write a program to swap value of two variables using pointer.
#include<stdio.h>

void swap(int *,int *);

int main()
{
    int a,b;

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("Before swaping a=%d,b=%d ",a,b);

    swap(&a,&b);

    printf("\nAfter swaping a=%d,b=%d ",a,b);

    return 0;
}

void swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}