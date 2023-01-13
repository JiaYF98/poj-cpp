#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[100010];
int main()
{
	cin>>s;
	for(long long i=0;s[i];++i){
		long long j=0,n=0;
		for(;s[j];++j)
			if(i!=j&&s[j]==s[i])
				++n;//break;
		if(!n/*s[j]==0*/){
			cout<<s[i]<<endl;
			return 0;
		}
	}
	cout<<"no"<<endl;
	return 0;
}
