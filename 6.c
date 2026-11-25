#include<stdio.h>
int main()
{

    int n,temp,sum=0,count=0;
    int r,i,power=0;
    
    
    
    printf("\n Enter Number=");
    scanf("%d",&n);
    
    
    temp=n;
    
    for(i=n;i>0;i/=10)
    {
      count++;
      
      n/=10;
    }
    
    n=temp;
    do
    {
    
        r=n%10;
        power=power*r;
        
        sum=sum+power;
        
        n/=10;
    
    }while(n!=0);
    
    if(n==sum)
      printf("%d is armstrong number.",temp);
    else
      printf ("%d is not a armstrong number!!",temp);
    
   return 0;
}
