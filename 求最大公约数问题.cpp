#include <iostream>
#include <cstdio>
using namespace std;
long long GYS(long long m,long long n)
{
	if(m>n){
		n=n^m;
		m=m^n;
		n=n^m;
	}
	int t=1;
	for(long long i=1;i<=m;++i){
		if(!(m%i||n%i))
			t=i;
	}
	return t;
}
int main()
{
	long long m,n;
	cin>>m>>n;
	cout<<GYS(m,n)<<endl;
	return 0;
}
