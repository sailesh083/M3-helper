#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{       int n;
	int i=0;
	float x[10];
	float y[10];
	float yc[10];
	float ys[10];
	float yc2[10];
	float ys2[10];
	float sum0=0,sum1=0,sum2=0,sum3=0,sum4=0;
		float a0,a1,a2,b1,b2;
		clrscr();
	printf("Enter the value of n.\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value of x & corresponding y.\n");
		scanf("%f %f",&x[i],&y[i]);

	}
	for(i=0;i<n;i++)
	{
		yc[i]=cos(x[i])*y[i];
		ys[i]=sin(x[i])*y[i];
		yc2[i]=cos(2*x[i])*y[i];
		ys2[i]=sin(2*x[i])*y[i];
		printf("%f\t%f\t%f\t%f\t%f\t%f\n",x[i],y[i],yc[i],ys[i],yc2[i],ys2[i]);
	}
	for(i=0;i<n;i++)
	{
		sum0=sum0+y[i];
		sum1=sum1+yc[i];
		sum2=sum2+ys[i];
		sum3=sum3+yc2[i];
		sum4=sum4+ys2[i];
	}

	a0=(2*sum0)/n;
	a1=(2*sum1)/n;
	b1=(2*sum2)/n;
	a2=(2*sum3)/n;
	b2=(2*sum4)/n;
	printf("%f %f %f %f %f",a0,a1,a2,b1,b2);

}
