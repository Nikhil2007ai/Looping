#include<stdio.h>

int main()
{
    int n;
    int sum=0,r;
    
    printf("Enter the number=");
    scanf("%d",&n);
    
    

    do
    {
    
        r=n%10;
        sum+=r;
        
        n/=10;
    
    }while(n!=0);
    
    printf("Sum of all Digits=%d",sum);


    return 0;
}
