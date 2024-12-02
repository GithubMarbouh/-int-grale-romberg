#include<stdlib.h>
#include<stdio.h>
#include<math.h>
double ff(double x)
{
       double y;
              y =pow(x,2);
return y;
}


double a,b,sub;                     // limit
double h[10];
double r[10][10];
int ii,i,j,k,l,n,jj,ji;
 main()
{
//a=0;
///b=1;                 // b is the upper limit   

printf("donner la valeur de a: ");
scanf("%lf",&a);
printf("donner la valeur de b: ");
scanf("%lf",&b);
printf("donner la valeur de n: ");
scanf("%d",&n);
for(ii=0;ii<=n-1;ii++)
{ 
h[ii]=(b-a)/pow(2,ii);
}

r[0][0]=(b-a)*(ff(a)+ff(b))/2;
for(j=1;j<=n-1;j++)
{  sub=0;
	for(i=1;i<=pow(2,j-1);i++)
	{ 
         sub = sub + ff(a+(2*i-1)*h[j]);
 
	}
	r[j][0]=r[j-1][0]/2+h[j]*sub;
	for(k=1;k<=j;k++)
	{
	r[j][k]=(pow(4,k)*r[j][k-1]-r[j-1][k-1])/( pow(4,k)-1 );
    } 	
} 
for (jj=0;jj<n;jj++)
{
     for(ji=0;ji<n;ji++)
 printf("%.4lf\t",r[jj][ji]);
  printf("\n");
  
}

getch();
}







