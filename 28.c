#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
        float x1,x2,y1,y2,D,r,A;
        
        printf("Enter the value of x1 and x2=");
        scanf("%f %f",&x1,&x2);
        
        printf("Enter the value of y1 and y2=");
        scanf("%f %f",&y1,&y2);
        
        
        D=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        r=D/2.0;
        
        A=PI*r*r;
        
        printf("Area= %.3f",A);
  
        











    return 0;
}
