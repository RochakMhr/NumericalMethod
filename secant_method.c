#include <stdio.h>
#include <math.h>

float funct(float x){
    float y;
    y=exp(-x)-5;
    return y;
}

int main()
{
    float x0,x1,x2,up,down,error,e, old;
    int iteration;
    iteration =0;
    e=0.001;
     
    printf("\n Enter the two initial guesses\n");
    scanf("%f %f",&x0,&x1);
     
    printf("\nThe value of function at x0 is %f",funct(x0));
    printf("\nThe value of function at x1 is %f",funct(x1));
     
     do{
         up = funct(x1)*(x1-x0);
         down = funct(x1)-funct(x0);
         old = x1;
         x2 = x1 - (up/down);
         x1 = x2;
         
         error = fabs((x1-old)/x1);
         iteration = iteration+1;
         x0 = old;
         
     }while(error>e);
     
      printf("\n The approximate root of function is %f", x1); 
        printf("\n The value of function at approximate root is %f", funct(x1));
        printf("\n Total number of iteration is %d",iteration);
     
 
    return 0;
}
