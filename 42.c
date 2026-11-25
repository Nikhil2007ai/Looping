#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,fact=1,n;
    
    float sum=0;
    
    printf("Enter a number=");
    scanf("%d",&n);
    
    
    for(j=1;j<=n;j++)
    {
       fact=1;
       
        for(i=1;i<=j;i++)
        {
    
            fact*=i;
        
        }
        
        
        
        sum+=pow(j,j)/(float)fact;
        
        }

      
    printf("Result=%.2f",sum);
    
   









    return 0;
}
