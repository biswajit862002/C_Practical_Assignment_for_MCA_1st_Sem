// write a program to find the sum of all elements of an array using pointers.

#include<stdio.h>

int sumOfAllElements(int *,int);

int main()
{
    int arr[10],i,res;

    printf("Enter 10 elements of ana array : ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }

    res = sumOfAllElements(arr,10);

    printf("\nSum of all elements in array is = %d",res);

    return 0;
}

int sumOfAllElements(int *ptr,int size)
{
    int i,sum = 0;

    for(i =0; i<size; i++)
    {
        sum = sum + ptr[i];
    }
    return sum;
}