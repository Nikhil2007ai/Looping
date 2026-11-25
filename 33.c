#include<stdio.h>


int main()
{
    int n,i,found=0;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    
    
      if(n%i==0)
      {
      
          found++;
      
      }
    
    
    }
    if(found==2)
    {
    
          printf("Prime number!!");
          
    
    }
    else
    {

          printf("Not a prime number!!");

    }






    return 0;
}
