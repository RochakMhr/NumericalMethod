#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) 2*x*x*x-5

int main()
{
	float Xu, Xl, Xm, f0, f1, f2, err;
	int itr = 1;
	start: 
	printf("\nEnter Xu that makes f(Xu) positive: ");
	scanf("%f", &Xu);
	printf("\nEnter Xl that makes f(Xl) negative: ");
	scanf("%f",&Xl);	 
 
	f0 = f(Xu);
	f1 = f(Xl);
	
	if( f0 * f1 > 0.0)
	 {
		printf("The value you entered are incorrect... try again\n");
		goto start;
	 }
   
	printf("\nIteration\tXu\tf(Xu)\tXl\tf(Xl)\tXm\tf(Xm)\tError\n\n");
	do
	{
		Xm = (Xu + Xl)/2;
		f2 = f(Xm);
		err = fabs((Xm-Xu)/Xm);
		printf("%d\t\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n",itr, Xu, f(Xu), Xl, f(Xl), Xm, f2, err);
		
		if( f0 * f2 < 0)
		{
			Xl = Xm;
		    f1 = f2;
		}
		else
		{
			Xu = Xm;
			f0 = f2;
		}
		itr +=  1;
	 }
	 while(fabs(err)>0.01);
	 printf("\nRequired root is: %f", Xm);
}
