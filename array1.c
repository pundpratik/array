//WAP to calculate average marks of a 10 students.
#include<stdio.h>
#define size 10
int main()
{
	int a[size],sum=0;
	printf("\n enter the %d value ",size);
	for(int i=1;i<=size;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n the average of array is %d",(sum/size));
	return 0;
}
