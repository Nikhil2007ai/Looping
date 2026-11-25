#include<stdio.h>

int main()
{
    int i,j;
    
    
    i=1;
    j=1;
    do
    {
       j=1;
        do
        {
        
        printf(" %5d ",j*i);
        
        
        j++;
        
        
        }while(j<=10);

   printf("\n");


      i++;
    }while(i<=12);
    return 0;
}
