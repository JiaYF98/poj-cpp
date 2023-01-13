#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long long n;//int会溢出 
	scanf("%lld",&n);		//long long类型用%lld 
	while(n!=1){
		if(n%2){
			printf("%lld*3+1=",n);
			n=3*n+1;
			printf("%lld\n",n);
		}
		else{ //else后如果不是一条语句一定要加括号！ 
			printf("%lld/2=",n);
			n=n/2;
			printf("%lld\n",n);
		}
	}
	printf("End\n");
	return 0;
}
