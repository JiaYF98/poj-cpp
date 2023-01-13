#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	int m;
	scanf("%d",&n);
	scanf("%d",&m);
	int max=m,min=m;
	for(int i=0;i<n-1;++i){
		scanf("%d",&m);
		if(m>max)
		max=m;
		if(m<min)
		min=m;
	}
	printf("%d",max-min);
	return 0;
}
