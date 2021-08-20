#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j,t[3][3];
	printf("\n enter the 3*3 A matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
			
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t[i][j]=a[j][i];
				
		}
	}
	for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
			
			
		}
		printf("\n");
	}
	for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",t[i][j]);
			
			
		}
		printf("\n ");
	}
}
