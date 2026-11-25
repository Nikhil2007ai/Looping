#include<stdio.h>

int main()
{
	int max=0,n;
	
	printf("Enter the number=");
	scanf("%d",&n);
	
	max=n;
	
	
	for( ; ; )
	{
	        printf("Enter number ::");
	        scanf("%d",&n);
	      
	        
		if(n!=-999)
		   {
		     if(n>max)
		     {
		        max=n;
		     
		     }
		    }
		else
		   break;
	
	
	
	
	}
	
	printf("Max of all Numbers= %d",max);
	








	return 0;
}
