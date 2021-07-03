#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#define f(x) x-exp(-x)
#define g(x) x

int main()
{
	 int itr=1, n;
	 float x0, x1, e;

	 printf("Enter initial guess: ");
	 scanf("%f", &x0);
	 printf("Enter tolerable error: ");
	 scanf("%f", &e);
	 printf("Enter maximum iteration: ");
	 scanf("%d", &n);
	 printf("\nIteration\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  x1 = g(x0);
		  printf("%d\t%f\t%f\t%f\t%f\n",itr, x0, f(x0), x1, f(x1));
		
		  itr = itr + 1;
		
		  if(itr>n)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }
		  
		  x0 = x1;
		  
	 }while( fabs(f(x1)) > e);
	 
	 printf("\nRoot is %f", x1);
	
	 return(0);
}
