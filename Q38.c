// write a program to add two numbers using pointers.

#include<stdio.h>

int add(int *,int *q);

int main()
{
    int a,b;;

    printf("Enter two numbers");
    scanf("%d %d",&a,&b);

    int res = add(&a,&b);

    printf("Sum of %d and %d is = %d",a,b,res);

    return 0;
}

int add(int *p,int *q)
{
    return(*p + *q);
}