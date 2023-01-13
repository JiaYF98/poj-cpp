#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	int m;
	scanf("%d",&n);
	int max=0,min=2000;
	for(int i=0;i<n;++i){
		scanf("%d",&m);
		if(m>max)
		max=m;
		if(m<min)
		min=m;
	}
	printf("%d",max-min);
	return 0;
}
