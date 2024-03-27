// write a program for deletion of an element from the specified location from array.

#include<stdio.h>

int main()
{
    int a[10],i,n;
    printf("Enter 10 elements in array : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array elements are : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nWhich position element want you delete : ");
    scanf("%d",&n);

    if(n >= 0 && n <= 9)
    {
        a[n] = -1;
    }
    else{
        printf("Invalid Index");
    }

    for(i=0; i<10; i++)
    {
        if(a[i] != -1)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}