#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n;
	int i;
	float x[15];
	float y[15];
	float yc[15];
	float ys[15];
	float yc2[15];
	float ys2[15];
	float sum0=0,sum1=0,sum2=0,sum3=0,sum4=0;
	float a0,a1,a2,b1,b2;
	clrscr();
	printf("Enter the number of given x and y pairs.\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value of x(in degrees) & corresponding y.\n");
		scanf("%f %f",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		x[i]=(3.14159/180)*x[i];
	}
	printf("Solution:\n");
	printf("Table for computing first two harmonic:\n");
	printf("x\ty\tycosx\tysinx\tycos2x\tysin2x\n");
	for(i=0;i<n;i++)
	{
		yc[i]=cos(x[i])*y[i];
		ys[i]=sin(x[i])*y[i];
		yc2[i]=cos(2*x[i])*y[i];
		ys2[i]=sin(2*x[i])*y[i];
		printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",x[i],y[i],yc[i],ys[i],yc2[i],ys2[i]);
	}
	for(i=0;i<n;i++)
	{
		sum0=sum0+y[i];
		sum1=sum1+yc[i];
		sum2=sum2+ys[i];
		sum3=sum3+yc2[i];
		sum4=sum4+ys2[i];
	}
	printf("\n\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n\n",sum0,sum1,sum2,sum3,sum4);
	a0=(2*sum0)/n;
	a1=(2*sum1)/n;
	b1=(2*sum2)/n;
	a2=(2*sum3)/n;
	b2=(2*sum4)/n;
	printf("Hence, the values of fourier coefficents are:\n");
	printf("a0=%.3f\na1=%.3f\na2=%.3f\nb1=%.3f\nb2=%.3f\n",a0,a1,a2,b1,b2);
	printf("\nHence, the fourier series is:\n");
	printf("y = %.3f+(%.3fcosx+%.3fsinx)+(%.3fcos2x+%.3fsin2x)+.....",(a0/2),a1,b1,a2,b2);
}
