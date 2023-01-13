#include <iostream>
#include <cstdio>
using namespace std;
long long GYS(long long a,long long b)
{
	if(b>a){
		a=a^b;
		b=b^a;
		a=a^b;
	}
	while(a%b){
		long long t=a%b;
		a=b;
		b=t;
	}
	return b;
}
int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<GYS(a,b)<<endl;
	return 0;
}
