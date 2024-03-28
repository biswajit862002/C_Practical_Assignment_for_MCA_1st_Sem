// write a program to reverse an array using pointer.

#include<stdio.h>

void reverseArray(int *,int);

int main()
{
    int arr[10],i;

    printf("Enter 10 elements in array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    reverseArray(arr,10);

    return 0;
}

void reverseArray(int *ptr,int size)
{
    int i;

    printf("\nReverse array is = ");
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",*(ptr+i));
    }
}