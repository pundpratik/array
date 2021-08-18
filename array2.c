//WAP to find greatest number in an array.
#include<stdio.h>
#define size 10
int main()
{
	int a[size];
	int i,max=0;
	printf("\n enter the %d number ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<size;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\n the largest number of array is %d",max);
	return 0;
}	
