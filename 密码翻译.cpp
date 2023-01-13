#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[90];
int main()
{
	freopen("C:\\Documents and Settings\\Administrator\\×ÀÃæ\\test.txt","r",stdin);
	cin.getline(s,sizeof(s));
	for(int i=0;s[i];++i){
		if(s[i]>='a'&&s[i]<='y'||s[i]>='A'&&s[i]<='Y')
			s[i]+=1;
		else if(s[i]=='z')
			s[i]='a';
		else if(s[i]=='Z')
			s[i]='A';
	}
	for(int i=0;s[i];++i)
		cout<<s[i];
	return 0;
}
