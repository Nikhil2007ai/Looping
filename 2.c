#include<stdio.h>

int main()
{
    int n,sum=0,r;
    
    printf("Enter the number = ");
    scanf("%d",&n);

    while(n>0)
    {
    
      r=n%10;
      if(r%2==0)
        sum+=r;
        
      n/=10;
      
    }
    
    printf("Sum of even Digits=%d",sum);

  return 0;
}
