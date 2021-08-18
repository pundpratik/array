//WAP to find smallest number in an array.
#include<stdio.h>
#define size 10
int main()
{
	int a[size];
	int i,min=0;
	printf("\n enter the %d number ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	min=a[0];
	for(i=0;i<size;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("\n the smallest number of array is %d",min);
	return 0;
}	
