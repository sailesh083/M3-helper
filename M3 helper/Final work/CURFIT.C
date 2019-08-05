#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n;
	float a,b;
	float x[15],y[15],xy[15],x2[15];
	float sumx=0,sumy=0,sumxy=0,sumx2=0;
	clrscr();
	printf("Curve fitting.\n");
	printf("Enter the number of x and y values given.\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter values of x and corresponding y.\n");
		scanf("%f%f",&x[i],&y[i]);
	}
	for(i=1;i<=n;i++)
	{
		xy[i]=x[i]*y[i];
		x2[i]=pow(x[i],2);
	}
	for(i=1;i<=n;i++)
	{
		sumx=sumx+x[i];
		sumy=sumy+y[i];
		sumxy=sumxy+xy[i];
		sumx2=sumx2+x2[i];
	}
	printf("\nMethod of least square.\n");
	printf("Linear form(y=ax+b)\n");
	printf("Using given values to form table.\n");
	printf("x\ty\txy\tx^2\n");
	for(i=1;i<=n;i++)
		printf("%.3f\t%.3f\t%.3f\t%.3f\n",x[i],y[i],xy[i],x2[i]);
	printf("\n%.3f\t%.3f\t%.3f\t%.3f\n",sumx,sumy,sumxy,sumx2);
	printf("The normal equations are:\n");
	printf("\t%.3f = %.3fa+%db\n",sumy,sumx,n);
	printf("\t%.3f = %.3f+%.3fb\n",sumxy,sumx2,sumx);
	printf("Solving these equations we get:\n");
	a=(sumxy*n-sumx*sumy)/(sumx2*n-pow(sumx,2));
	b=(sumx*sumxy-sumx2*sumy)/(pow(sumx,2)-n*sumx2);
	printf("\n\ta=%.3f and b=%.3f\n",a,b);
	printf("Therefore, Best fit = y=%.2fx+%.2f\n",a,b);
}

