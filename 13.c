#include<stdio.h>

int main()
{
	int i,sum=0,n;
	
	
	for( ; ; )
	{
	        printf("Enter number ::");
	        scanf("%d",&n);
	        
		if(n!=-1)
		   sum+=n;
		else
		   break;
	
	
	
	
	}
	
	printf("Sum of all numbers = %d",sum);
	








	return 0;
}
