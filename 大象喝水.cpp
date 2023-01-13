#include <iostream>
#include <cstdio>
#define total_water 20.0 //µ¥Î»¡°Éý¡± 
#define Pi 3.14159
using namespace std;
int main()
{
	int r,h,n;
	double V;
	scanf("%d%d",&h,&r);
	V=(3.14159*r*r*h)/1000;
	n=total_water/V;
	if(n==total_water/V)
		printf("%d",n);
	else{
		n=n+1;
		printf("%d",n);
	}
	return 0;
}
