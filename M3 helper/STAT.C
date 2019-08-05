#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,i;
	float x[10],y[10];
	float X[10],Y[10];
	float XY[10];
	float sumX2=0,sumY2=0,sumXY=0;
	float sumx=0,sumy=0;
	float Xm,Ym;
	float r;
	clrscr();
	printf("Enter the value of n.\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the values of x and correspinding y.\n");
		scanf("%f%f",&x[i],&y[i]);
	}
	for(i=1;i<=n;i++)
	{
		sumx=sumx+x[i];
		sumy=sumy+y[i];
	}
	Xm=sumx/n;
	Ym=sumy/n;
	for(i=1;i<=n;i++)
	{
		X[i]=x[i]-Xm;
		Y[i]=y[i]-Ym;
		XY[i]=X[i]*Y[i];
	}
	for(i=1;i<=n;i++)
	{
		sumX2=sumX2+pow(X[i],2);
		sumY2=sumY2+pow(Y[i],2);
		sumXY=sumXY+XY[i];
	}
	r=((sumXY)/(sqrt(sumX2)*sqrt(sumY2)));
	printf("Solution:\n");
	printf("Here, the value of n is %d.\n",n);
	printf("Hence, mean of x = Xm = %f and mean of y = Ym = %f.\n",Xm,Ym);
	printf("x\ty\tX=x-Xm\tY=y-Ym\tXY\n");
	for(i=1;i<=n;i++)
	{
		printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",x[i],y[i],X[i],Y[i],XY[i]);
	}
	printf("The value of r is %f.",r);
}


