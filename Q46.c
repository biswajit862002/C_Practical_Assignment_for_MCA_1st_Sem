// write a program to find length of string

#include<stdio.h>

int length(char *);

int main()
{
    char str[50];
    int len;

    printf("Enter any string ; ");
    gets(str);

    len = length(str);

    printf("The lenght of string is %d",len);

    return 0;
}

int length(char *ptr)
{
    int l;
    for(l=0; *(ptr+l) != '\0'; l++);
    return l;
}