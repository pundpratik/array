#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("\n enter the 3*3 matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
			
		}
	}
	printf("\n entred matrix is :=\n ");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
			
		}
		printf("\n");
	}
}
