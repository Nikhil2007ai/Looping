#include<stdio.h>
void main()


{

    int n,rem,mul=1;
    
    printf("Enter the number=");
    scanf("%d",&n);


    while(n>0)
    {


      rem=n%10;
      mul=mul*rem;
      n/=10;




    }
    
    printf("Multiplication of Digits = %d",mul);







}
