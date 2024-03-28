// write a program to search an element in array using pointer.

#include<stdio.h>

int searchArray(int *,int,int);

int main()
{
    int arr[10],i,searchElement;

    printf("Enter 10 elements in array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number which you want to search : ");
    scanf("%d",&searchElement);

    if(searchArray(arr,searchElement,10))
    {
        printf("Your searched element is found in array");
    }
    else{
        printf("Your searched element is not found in array");

    }

    return 0;
}

int searchArray(int *ptr,int searchElement,int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        if(*(ptr+i) == searchElement)
        {
            return 1;
        }
    }
    return 0;

}