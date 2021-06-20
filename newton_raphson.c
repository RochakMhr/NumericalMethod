
#include <stdio.h>
#include <math.h>
 

/*
float funct(float x){
    float y;
    y=3*pow(x,2)-6*pow(x,1)+2;
    return y;
}

float derivative_funct(float x){
    float y;
    y = 6*x-6;
    return y;
}
*/

// float funct(float x){
//    float y;
//    y=0.5*pow(x,3)-2*pow(x,2)+2*x+1;
//    return y;
//}
//
//float derivative_funct(float x){
//    float y;
//    y = 1.5*x*x-4*x+2;
//    return y;
//}


 float funct(float x){
    float y;
    y=exp(-x)-5;
    return y;
}

float derivative_funct(float x){
    float y;
    y = -exp(-x);
    return y;
}


int main()
{
    float x0,x1,error,e, multiply,old;
    int iteration;
    iteration =0;
    e=0.001;
     
    printf("\n Enter the initial guesses\n");
    scanf("%f",&x0);
     
    printf("\nThe value of function at x0 is %f",funct(x0));
    printf("\nThe derivative  of function at x0 is %f",derivative_funct(x0));
    
    do{
    old =x0;
    x1=x0-(funct(x0)/derivative_funct(x0));
    x0 = x1;
        
    error = fabs((x0-old)/x0);
    iteration = iteration+1;
        
    }while(error>e);
     
    printf("\n The approximate root of function is %f", x0); 
    printf("\n The value of function at approximate root is %f", funct(x0));
    printf("\n Total number of iteration is %d",iteration);
 
    return 0;
}
