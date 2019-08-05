#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,i,j,a,d;
	float x[15],y[15];
	float m=1,p=1,t=0,l,q;
	clrscr();
	printf("Lagrange's interpolation formula.\n");
	printf("Enter the number of observations.\n");
	scanf("%d",&n);
	printf("Enter the value of x and corresponding y.\n");
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&x[i],&y[i]);
	}
	printf("Enter the value of x for which you wish to calculate y.\n");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		m=m*(a-x[i]);
	}
	l=m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				p=p*1;
			}
			else
			{
				p=p*(x[i]-x[j]);
			}
		}
		q=l/(a-x[i]);
		t=t+((q/p)*y[i]);
		p=1;
	}
	printf("\nThe value of y for given value of x is = %.3f",t);
}

