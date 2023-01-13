#include <iostream>
#include <cstdio>
using namespace std;
int a[10010];//数组中有a 后面不能再定义a 
int main()
{
	int L,M;
	cin>>L>>M;
	for(int i=0;i<=L;++i)
		a[i]=1;
	for(int i=0;i<M;++i){
		int p,q;
		cin>>p>>q;//cin输入变量的时候一定要在每个变量之前加>> 
		for(int j=p;j<=q;++j)
			a[j]=0;
	}
	int n=0;
	for(int i=0;i<=L;++i){
		if(a[i])
			n+=1;
	}
	cout<<n<<endl;
	return 0;
}
