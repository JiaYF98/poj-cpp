#include <iostream>
#include <cstdio>
#include <cstring>
char s[100010];
using namespace std;
int main()
{
	cin>>s;
	for(long long i=0;s[i];++i){
		if(s[i]!='Z'){
			long long j=i+1,n=0;
			for(;s[j];++j)
				if(s[j]==s[i]){
					s[j]='Z';
					++n;
				}
			if(!n){
				cout<<s[i]<<endl;
				return 0;
			}
		}
	}
	cout<<"no"<<endl;
	return 0;
}

