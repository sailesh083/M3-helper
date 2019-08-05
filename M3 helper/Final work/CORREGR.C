#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,i,g;
	float x[15],y[15];
	float X[15],Y[15];
	float XY[15];
	float X2[15],Y2[15];
	float sumX2=0,sumY2=0,sumXY=0;
	float sumx=0,sumy=0;
	float Xm,Ym;
	float r;
	float sigx,sigy;
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
		X2[i]=pow(X[i],2);
		Y2[i]=pow(Y[i],2);
	}
	for(i=1;i<=n;i++)
	{
		sumX2=sumX2+X2[i];
		sumY2=sumY2+Y2[i];
		sumXY=sumXY+XY[i];
	}
	r=((sumXY)/(sqrt(sumX2)*sqrt(sumY2)));
	printf("Solution:\n");
	printf("Here, the value of n is %d.\n",n);
	printf("Hence, mean of x = Xm = %f and mean of y = Ym = %f.\n",Xm,Ym);
	printf("Table to compute coefficent of correaltion is as follows:\n");
	printf("x\ty\tX=x-Xm\tY=y-Ym\tXY\tX^2\tY^2\n");
	for(i=1;i<=n;i++)
	{
		printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",x[i],y[i],X[i],Y[i],XY[i],X2[i],Y2[i]);
	}
	printf("\n%.2f\t%.2f\t\t\t%.2f\t%.2f\t%.2f\n",sumx,sumy,sumXY,sumX2,sumY2);
	printf("\nThe value of coefficient of correlation is %.3f.\n",r);
	printf("If you wish to obtain the regression lines, Press 1 else 0.\n");
	scanf("%d",&g);
	if(g==1)
	{
		sigx=sqrt((sumX2)/n);
		sigy=sqrt((sumY2)/n);
		printf("Regression line of y on x is hence:\n");
		printf("\ty = %.3fx+%.3f\n",(r*(sigy/sigx)),(Ym-((r*(sigy/sigx))*Xm)));
		printf("Regression line of x on y is hence:\n");
		printf("\tx = %.3fy+%.3f\n",(r*(sigx/sigy)),(Xm-((r*(sigx/sigy))*Ym)));
	}
}


