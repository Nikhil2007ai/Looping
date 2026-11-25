#include<stdio.h>

int main()
{
    int n,sum=0;
    
    
    while(1)
    {
    
      printf("Enter the number=");
      scanf("%d",&n);
      
      if(n==-1)
      {
      
          break;
      
      }
      else if(n>0)
      {
      
          sum+=n;
      }
      else
      {
          continue;
        
      
      }
    
    
    
    
    
    
    }
    
  printf("Sum=%d",sum);










    return 0;
}
