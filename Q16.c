// write a program to find GCD(greatest common divisior or HCF) and LCM(least common multiple) two numbers.

#include<stdio.h>

int GCD(int,int);
int LCM(int,int);

int main()
{
    int a,b,gcd,lcm;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    gcd = GCD(a,b);
    lcm = LCM(a,b);

    printf("\nGCD of %d and %d is = %d",a,b,gcd);
    printf("\nLCM of %d and %d is = %d",a,b,lcm);

    return 0;
}

int GCD(int a,int b)
{
    int i;
    for(i = a>b?b:a ; i >= 1 ; i--)
    {
        if(a%i == 0 && b%i ==0)
        {
            return i;
        }
    }
}

int LCM(int a,int b)
{
    int i;
    for (i = a>b?b:a; i <= a*b ; i++)
    {
        if(i%a == 0 && i%b == 0)
        {
            return i;
        }
    }
    
}