#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int N,n=0;
	scanf("%d",&N);
	if(N>0){
		int m;
		while(N){
			m=N%10;
			n=n*10+m;
			N/=10;
		}
		printf("%d",n);
	}
	else if(N<0){
		N=-N;
		int m;
		while(N){
			m=N%10;
			n=n*10+m;
			N/=10;
		}
		printf("-%d",n);
	}
	else printf("%d",N);
	return 0;
}
