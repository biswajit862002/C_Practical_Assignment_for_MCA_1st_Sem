// write a program to accept a string and count the number of vowels present in this string.

#include<stdio.h>

int main()
{
    char str[50];
    int i,vowels=0;
    printf("Enter any string : ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
    }

    printf("%d No of vowels present in this string",vowels);

    return 0;
}