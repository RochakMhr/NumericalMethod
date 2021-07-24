#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float x[10],y[10],temp=1,f[10],sum,a;
  int i,n,j,k=0,c;

  printf("how many variables are there? ");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
   printf("\n\nEnter the value of x%d: ",i);
   scanf("%f",&x[i]);
   printf("\nEnter the value of y%d: ",i);
   scanf("%f",&y[i]);
  }
  printf("\n\nEnter value of x: ");
  scanf("%f",&a);

  for(i=0;i<n;i++)
  {
    temp = 1;
    k = i;
    for(j=0;j<n;j++)
    {
      if(k==j)
      {
        continue;
      }
      else
      {
        temp = temp * ((a-x[j])/(x[k]-x[j]));
      }
    }
    f[i]=y[i]*temp;
  }

  for(i=0;i<n;i++)
  {
     sum = sum + f[i];
  }
  printf("\n\n f(%.0f) = %.2f ",a,sum);
  getch();
}

