#include<stdio.h>

int main()
{
    int i,j;
    
    
    for(i=1;i<=4;i++)
    {
      for(j=1;j<=i;j++)
      {
          if(i==1||i==3)
          {
            printf("%d",j%2);
          
          }
          else
           printf("%d",(j+1)%2);
      
      
      
      
    
    
      }
      
      printf("\n");
    
    
    }





    return 0;
}
