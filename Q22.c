// write a program for addition of two matrix of any order in c
#include<stdio.h>

int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	
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
	
	printf("\nSum Of Two Matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

    return 0;
}