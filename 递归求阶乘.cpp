#include <iostream>
#include <cstdio>
using namespace std;
int F(int n)
{
	if(n-1)
		return n*F(n-1);
	return n;//»ò return 1; 
}
int main(){
	int n;
	cin>>n;
	cout<<F(n)<<endl;
	return 0;
}
