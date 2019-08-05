#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{       int n;
	int i=0;
	float x[10];
	float y[10];
	float xy[10];
	float xx[10];
	float sum0=0,sum1=0,sum2=0,sum3=0;
	float a,b,c,d;
	float x1,y1;
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
		xx[i]=x[i]*x[i];
		xy[i]=x[i]*y[i];
	}
	for(i=0;i<n;i++)
	{
		sum0=sum0+x[i];
		sum1=sum1+y[i];
		sum2=sum2+xx[i];
		sum3=sum3+xy[i];
		printf("%f %f %f %f ",sum0,sum1,sum2,sum3);
	 }
	  a=sum0;
	  b=sum1;
	  c=sum2;
	  d=sum3;
	  x1=(c-(b*d))/(a-b);
	  y1=(c-(a*x1))/b;

	  printf("%f %f",x1,y1);
	  }
