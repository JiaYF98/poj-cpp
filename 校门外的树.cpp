#include <iostream>
#include <cstdio>
using namespace std;
int a[10010];//��������a ���治���ٶ���a 
int main()
{
	int L,M;
	cin>>L>>M;
	for(int i=0;i<=L;++i)
		a[i]=1;
	for(int i=0;i<M;++i){
		int p,q;
		cin>>p>>q;//cin���������ʱ��һ��Ҫ��ÿ������֮ǰ��>> 
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
