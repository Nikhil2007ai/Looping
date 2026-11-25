#include<stdio.h>

int main()
{
    int i,j;
    
    for(i=1;i<=9;i++)
    {
    
    
        for(j=1;j<=9;j++)
        {
        
            if(i==2&&j==5||i==3&&(j==4||j==5||j==6)|| i==4&&(j==3||j==4||j==5||j==6||j==7)||i==5&&(j==2||j==3||j==4||j==5||j==6||j==7||j==8)||i==6&&(j==3||j==4||j==5||j==6||j==7)||i==7&&(j==4||j==5||j==6)||i==8&&j==5)
            {
            
                printf("  ");
            
            }
            else
            {

                printf("* ");


            }
        
        
          
        
        
        }
    
    
       printf("\n");
    
    
    }






    return 0;
}
