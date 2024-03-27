// 2.	write a program to swap values of two variables with and without using third variable.

#include<stdio.h>

void swap_with_temp(int *,int *);
void swap_without_temp(int ,int );


int main()
{
    int a,b;
    printf("\n*** With Temporary variable ***\n");

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("Before swaping a=%d,b=%d ",a,b);

    swap_with_temp(&a,&b);

    printf("\nAfter swaping a=%d,b=%d ",a,b);

// without third variable
    printf("\n\n*** Without Temporary variable ***\n");
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    swap_without_temp(a,b);


    return 0;
}

void swap_with_temp(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swap_without_temp(int p,int q)
{
    printf("Before swaping p=%d,q=%d ",p,q);

    p = p+q;
    q = p-q;
    p = p-q;

    printf("\nAfter swaping p=%d,q=%d ",p,q);

}