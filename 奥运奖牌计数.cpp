#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int suma=a,sumb=b,sumc=c,sum=a+b+c;
	for(int i=0;i<n-1;++i){
		scanf("%d%d%d",&a,&b,&c);
		suma+=a;
		sumb+=b;
		sumc+=c;
		sum=suma+sumb+sumc;
	}
	printf("%d %d %d %d",suma,sumb,sumc,sum);
	return 0;
}
