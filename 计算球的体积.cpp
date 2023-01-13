#include <iostream>
#include <cstdio>
#include <cmath> 
using namespace std;
#define Pi 3.14
int main()
{
	double r;
	scanf("%lf",&r);
	double V;
	V=(4/3.0)*Pi*(r*r*r);
	printf("%.2f",V);
	return 0;
}
