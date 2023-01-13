#include <iostream>
#include <cstdio>
using namespace std;
#define MX 110
int a[MX][MX];
int b[MX][MX];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j)
			cin>>a[i][j];
	}
	for(int j=0;j<m;++j){		//第0行和第n-1行的值不变 
		b[0][j]=a[0][j];
		b[n-1][j]=a[n-1][j];
	}
	for(int i=0;i<n;++i){		//第0列和第m-1列的值不变 
		b[i][0]=a[i][0];
		b[i][m-1]=a[i][m-1];
	}
	for(int i=1;i<n-1;++i){
		for(int j=1;j<m-1;++j)
			b[i][j]=(int)(a[i][j]+a[i][j-1]+a[i][j+1]+a[i-1][j]+a[i+1][j])/5.0+0.5;
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}

