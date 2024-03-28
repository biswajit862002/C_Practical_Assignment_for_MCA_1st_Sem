// write a program to copy one array to another array using pointer.

#include<stdio.h>

void copyArray(int *,int);

int main()
{   
    int arr[10],i;

    printf("Enter 10 elements in array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    copyArray(arr,10);

    return 0;
}

void copyArray(int *ptr,int size)
{
    int arr2[size],i;

    for(i=0;i<size;i++)
    {
        arr2[i] = *(ptr+i);
    }

    printf("\nCopy array is = ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr2[i]);
    }
    
}