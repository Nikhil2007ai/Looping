#include<stdio.h>

int main()
{
	int i,count=0,n;
	
	
	for( ; ; )
	{
	        printf("Enter number ::");
	        scanf("%d",&n);
	        
		if(n!=0)
		   {
		     if(n>0)
		     {
		        count++;
		     
		     }
		    }
		else
		   break;
	
	
	
	
	}
	
	printf("count of positive numbers= %d",count);
	








	return 0;
}
