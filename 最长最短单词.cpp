#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[30000];
bool IsLetter(char c)
{
	return (c>='a'&&c<='z')||(c>='A'&&c<='Z');
}
int main()
{
	freopen("C:\\Documents and Settings\\Administrator\\×ÀÃæ\\test.txt","r",stdin);
	cin.getline(s,sizeof(s));
	int longstart,shortstart;
	int longlength=0,shortlength=sizeof(s);
	int length=0;
	for(int i=0;s[i];++i){
		if(IsLetter(s[i]))
			++length;
		else{
			if(length>longlength){
				longlength=length;
				longstart=i-length;
			}	
			if(length<shortlength){
				shortlength=length;
				shortstart=i-length;
			}
			length=0;
		}
	}
	for(int i=longstart;IsLetter(s[i]);++i)
		cout<<s[i];
	cout<<endl;
	for(int i=shortstart;IsLetter(s[i]);++i)
		cout<<s[i];
	cout<<endl;
	return 0;
}
