// write a program to input and print array elements using pointers.

#include<stdio.h>

void inputArray(int *,int);
void printArray(int *,int);

int main()
{
    int arr[10],i;

    inputArray(arr,10);
    printArray(arr,10);

    return 0;
}

void inputArray(int *ptr,int size)
{
    int i;

    printf("Enter %d elements in array : ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
}

void printArray(int *ptr,int size)
{
    int i;

    printf("%d elements of array are: ",size);
    for(i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
    }
}