#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[210][110];
string t[101];
int main()
{
	for(int i=0;i<200;++i){
		for(int j=0;j<100;++j){
			cin>>s[i][j];
			if(s[i][j]==' ')
				break;
		}
	}
	int max=strlen(s[0]),k=0;
	int min=strlen(s[0]),l=0;
	for(int i=1;s[i];++i){
		if(strlen(s[i])>max){
			max=strlen(s[i]);
			k=i;
		}
		else if(strlen(s[i])<min){
			min=strlen(s[i]);
			l=i;
		}
	}
	cout<<s[k]<<endl<<s[l]<<endl;
	return 0;
}
