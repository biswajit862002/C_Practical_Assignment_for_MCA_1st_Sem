// write a program to access an element in 2-D Array.

#include<stdio.h>

int main()
{
    int a[3][5],i,j;
    printf("Enter array elements : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter elements in pocket [%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nAccessing 2-D array elements are - \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}