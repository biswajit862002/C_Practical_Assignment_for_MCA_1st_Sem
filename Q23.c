// Write a program to multiply two 3 X 3 matrix.

#include<stdio.h>

int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum;
	
	printf("\nEnter Elements Of a First Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter Elements Of a Second Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum = 0;
			for(k=0;k<3;k++)
			{
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
	
	printf("\nProduct Of Two Matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
    return 0;
}