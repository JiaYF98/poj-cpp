#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,m;
	scanf("%d",&n);
	int sum=0;
	double ave;
	for(int i=0;i<n;++i){
		scanf("%d",&m);
		sum+=m;
		ave=double(sum)/n;
	}
	printf("%d %.5f",sum,ave);
	return 0;
}
