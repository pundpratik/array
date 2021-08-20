//Write a C program to compute sum of diagonal elements of a 2D array of size 3*3
#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j,sum=0;
	printf("\n enter 3*3 matrix ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
			
		}
	}
	for(i=0;i<3;i++)
	{
		sum=sum+a[i][i];
		
	}
	printf("\n sum of diagonal element is %d",sum);
	
}
