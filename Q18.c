// write a program to find the largest and smallest element in array.

#include<stdio.h>

int main()
{
    int a[10],i,s,l;
    printf("Enter 10 elements in array : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    s = a[0];
    for (i = 1; i < 10; i++)
    {
        if(s > a[i])
        {
            s = a[i];
        }
    }

    l = a[0];
    for (i = 1; i < 10; i++)
    {
        if(l < a[i])
        {
            l = a[i];
        }
    }

    printf("\nSmallest element in an array is = %d",s);
    printf("\nLargest element in an array is = %d",l);

    return 0;
}