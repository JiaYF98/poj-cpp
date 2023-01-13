#include <iostream>
#include <cstdio>
using namespace std;
long long Pell(long long k)
{
	if(k==1||k==2)
		return k;
	else
		return 2*Pell(k-1)+Pell(k-2);
}
long long a[10000000];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>a[i];
	for(int i=0;i<n;++i)
		cout<<Pell(a[i])%32767<<endl;
	return 0;
}
