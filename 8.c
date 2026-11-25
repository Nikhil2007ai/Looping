#include<stdio.h>

int main()
{
    int n,i;
    int found=0;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    i=1;
    
    while(i<=n)
    {
    
        if(n%i==0)
        
        found++;
        i++;
        
    }
    
    if(found==2)
       printf("%d is a prime number.",n);
       
    else
       printf("%d is not prime.",n);
    return 0;
}
