#include<stdio.h>

int main()
{
    int n,sum=0,i;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    i=1;
    
    while(i<=n)
    {
    
        if(i%2==1)
           sum+=i;
           
           
        i++;
   }
   printf("Sum of all odd numbers till %d = %d",n,sum);

    return 0;
}
