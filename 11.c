#include<stdio.h>

int main()
{
    double a=0,b=1,c;
    int n,i;
    
    
    printf("Enter the number of terms you want to print:");
    scanf("%d",&n);
    
    printf("Fibonacci series-\n");
    printf("%lf\n %lf\n ",a,b);
    
    for(i=1;i<=n-2;i++)
    {
         c=a+b;

         printf("%lf\n",c);
         
         a=b;
         b=c;         
         
    }








    return 0;
}
