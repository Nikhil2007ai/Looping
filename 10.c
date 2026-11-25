#include<stdio.h>

int main()
{
    int n,i,j;
    int found=0;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    j=1;
    
    while(j<=n)
    {
       found=0;
       i=1;
       while(i<=j)
       {
    
        if(j%i==0)
        {
        found++;
        }
        i++;
      }
        

       if(found==2)
       {
         printf("%d is a prime number.\n",j);
       }
       j++;
        
    }
    
    
       
    return 0;
}
