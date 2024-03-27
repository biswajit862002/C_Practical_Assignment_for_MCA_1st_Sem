// 3.	write a program to display the size of 	data type using "sizeof" operator.

#include<stdio.h>

int main()
{
    printf("\nSize of int = %d Bytes",sizeof(int));
    printf("\nSize of char = %d Byte",sizeof(char));
    printf("\nSize of float = %d Bytes",sizeof(float));
    printf("\nSize of double = %d Bytes",sizeof(double));
    printf("\nSize of long = %d Bytes",sizeof(long));
    printf("\nSize of short = %d Bytes",sizeof(short));


    return 0;
}