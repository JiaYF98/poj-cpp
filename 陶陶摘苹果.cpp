#include <iostream>
#include <cstdio>
using namespace std;
#define NUM 10
int a[15];
int main()
{
	for(int i=0;i<NUM;++i)
		cin>>a[i];
	int l;
	cin>>l;
	int n=0;
	for(int i=0;i<NUM;++i){
		if(l+30>=a[i])
			n+=1;
	}
	cout<<n<<endl;
	return 0;
}
