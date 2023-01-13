#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c;
	double x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(b*b==4.0*a*c){
		x1=(-b+sqrt(b*b-4.0*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4.0*a*c))/(2*a);
		printf("x1=x2=%.5f",x1);
	}
	else if(b*b>4.0*a*c){
		x1=(-b+sqrt(b*b-4.0*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4.0*a*c))/(2*a);
		printf("x1=%.5f;x2=%.5f",x1,x2);
	}
	else if(b*b<4.0*a*c){
		double m,n;
		m=-b/(2.0*a);
		n=sqrt(4.0*a*c-b*b)/(2*a);
		printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",m,n,m,n);
	}
	return 0;
}
