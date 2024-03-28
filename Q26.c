// write a program to add, subtract, multiply and divide two integers using userdefined type function with return type.

#include<stdio.h>

int add(int,int);
int sub(int,int);
int mult(int,int);
float div(int,int);

int main()
{
    int a,b,res1,res2,res3;
    float res4;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);

     res1 = add(a,b);
     res2 = sub(a,b);
     res3 = mult(a,b);

    printf("\nAddition of %d and %d is = %d",a,b,res1);
    printf("\nSubtract of %d and %d is = %d",a,b,res2);
    printf("\nMultiply of %d and %d is = %d",a,b,res3);
    if(b != 0)
    {
        float res4 = div(a,b);
        printf("\nDivide of %d and %d is = %.2f",a,b,res4);
    }
    else
    {
        printf("\nDenominator cant be 0");
    }

    return 0;
}

int add(int a,int b)
{
    return(a+b);
}

int sub(int a,int b)
{
    return(a-b);
}

int mult(int a,int b)
{
    return(a*b);
}

float div(int a,int b)
{
    return(a/b);
}