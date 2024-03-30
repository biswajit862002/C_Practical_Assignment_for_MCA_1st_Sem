// write a program to calculate sum of first 20 natural numbers using recursive function

#include<stdio.h>

int sum_first_n_number(int);

int main()
{
    int n,res;
    printf("Enter a number : ");
    scanf("%d",&n);

    res = sum_first_n_number(n);

    printf("Sum of first %d natural number is = %d",n,res);

    return 0;
}

int sum_first_n_number(int n)
{
	int sum=0;
	if(n==1)
	{
		return(1);
	}
	else
	{
		sum = n+sum_first_n_number(n-1);
		return(sum);
	}
}