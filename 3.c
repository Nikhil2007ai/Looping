#include<stdio.h>

int main()
{
    int n,sum1=0,r,pos=1,sum2=0;
    
    printf("Enter the number = ");
    scanf("%d",&n);

    while(n>0)
    {
    
      r=n%10;
      
      if(pos%2==0)
         sum1+=r;
      else
        sum2+=r;
        
      n/=10;
      pos++;
      
    }
    
    printf("Sum of even position Digits=%d\n",sum1);
    printf("Sum of odd Position Digits=%d",sum2);








    return 0;
}
