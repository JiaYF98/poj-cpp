#include <iostream>
#include <cstdio>
using namespace std;
int a[110];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;++i)
		scanf("%d",&a[i]);
	int m;
	scanf("%d",&m);
	int n=0;
	for(int i=0;i<N;++i){
		if(a[i]==m)
			n+=1;
	}
	printf("%d",n);
	return 0;
}
