//Write a program to search particular value in an array and return the index number where it is located.
#include<stdio.h>
int main()
{
	int a[100],f=0,i,search,size;
	printf("\n enter the value of array");
	scanf("%d",&size);
	printf("\n enter the %d element",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the element which you wan to find");
	scanf("%d",&search);
	for(i=0;i<size;i++)
	{
	
		if(a[i]==search)
		{
		
			f=1;
			break;
		}
	}
		if(f==1)
		{
		printf("\n %d element is found,and its index position is %d",search,i);
	}
	else
	{
		printf("\n %d element is not in array ",search);
		
	}
	return 0;
}
