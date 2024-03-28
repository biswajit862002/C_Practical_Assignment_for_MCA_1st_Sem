// write a program to read a string and check for palimdrome without using string related function (a string is [palimdrome if its half is mirror by itself eg: malayalam)

#include<stdio.h>
#include<string.h>

int isPalimdrome(char []);

int main()
{
    char str[50];
    printf("Enter any string : ");
    gets(str);

    if(isPalimdrome(str))
    {
        printf("Palimdrome");
    }
    else
    {
        printf("not a Palimdrome");
    }

    return 0;
}

int isPalimdrome(char s[])
{
    int i,l;
    for(l=0; s[l] != '\0'; l++);    

    for(i=0; i<l/2; i++)
    {
        if(s[i] != s[l-1-i])
        {
            return 0;
        }
    }
    return 1;

}