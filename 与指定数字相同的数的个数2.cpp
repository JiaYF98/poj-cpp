#include <iostream>
#include <cstdio>
using namespace std;
int a[110];
int main()
{
	int N;
	cin >> N;
	for(int i=0;i<N;++i)
		cin>>a[i];
	int m;
	cin>>m;
	int n=0;
	for(int i=0;i<N;++i){
		if(a[i]==m)
			n+=1;
	}
	cout<<n<<endl;
	return 0;
}
