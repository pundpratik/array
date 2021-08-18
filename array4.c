//WAP to sort array in ascending order.
#include<stdio.h>
#define size 10
int main()
{
	int a[size],i,j,temp;
	printf("\n enter %d element ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
    	for(i=0;i<size;i++)
    	{
    		for(j=i+1;j<size;j++)
    		{
    			if(a[i]>a[j])
    			{
    				temp=a[i];
    				a[i]=a[j];
    				a[j]=temp;
    			}
    		}
    	
    	}
    	for(i=0;i<size;i++)
    	{
    		printf("array after sorting %d ",a[i]);
    	}
    	

	return 0;
}	
