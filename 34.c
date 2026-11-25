#include<stdio.h>
#include<math.h>


int main()
{
    int n,temp,sum=0,count=0,rem;
    
    printf("Enter a number=");
    
    scanf("%d",&n);
    
    temp=n;
    
    while(temp!=0)
    {
    
        count++;
        temp/=10;
    
    
    
    }
    
    temp=n;
  
    while(temp!=0)
    {
      rem=temp%10;
      
      sum=sum+pow(rem,count);
      
      temp/=10;
    
    
    
    
    }
    if(sum==n)
    {
        printf("Armstrong number!!!");
    }
    else
    {
        printf("Not a Armstrong number!!!");
    
    }







    return 0;
}
