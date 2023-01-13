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
	if(a%b==0)
		return b;
	return GYS(b,a%b);
}
int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<GYS(a,b)<<endl;
	return 0;
}
