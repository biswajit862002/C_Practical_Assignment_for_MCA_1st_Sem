// 28.	Write a program to generate Fibonacci series using recursive function.

#include<stdio.h>

int fib(int);

int main()
{
    int a,i;
    printf("\nEnter How Many Terms Of Fibonacci Seris You Want To see : ");
	scanf("%d",&a);	
	for(i=0; i<a; i++)
		{
			printf("%d ",fib(i));
		}

    return 0;
}

int fib(int n)
{
	int f;
	if(n==0 || n==1)
	{
		return(n);
	}
	else
	{
		return(fib(n-1) + fib(n-2));
	}
}