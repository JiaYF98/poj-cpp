#include <iostream>
#include <cstdio>
using namespace std;
#define NUMi 5		//矩阵的行数 
#define NUMj 5		//矩阵的列数 
int a[NUMi][NUMj];
int b[NUMi][NUMj];	//用于存放行最大值 
int c[NUMi][NUMj];	//用于存放列最小值 
int main()
{
	freopen("C:\\Documents and Settings\\Administrator\\桌面\\test.txt","r",stdin);
	for(int i=0;i<NUMi;++i){
		for(int j=0;j<NUMj;++j)
			cin>>a[i][j];
	}
	for(int i=0;i<NUMi;++i){
		for(int j=0;j<NUMj;++j)
			b[i][j]=1;
	}
	for(int i=0;i<NUMi;++i){
		for(int j=0;j<NUMj;++j)
			c[i][j]=0;
	}
	for(int i=0;i<NUMi;++i){
		int max=a[i][0];
		int tmp=0;
		for(int j=1;j<NUMj;++j)
			if(a[i][j]>max){
			max=a[i][j];
			tmp=j;	
			}
		b[i][tmp]=a[i][tmp];	//记录存放行最大值 
	}
	for(int j=0;j<NUMj;++j){
		int min=a[0][j];
		int tmp=0;
		for(int i=0;i<NUMi;++i)
			if(a[i][j]<a[0][j]){
				min=a[i][j];
				tmp=i;
			}
		c[tmp][j]=a[tmp][j];	//记录存放列最小值 
	}
	//int n=0;
	for(int i=0;i<NUMi;++i){
		for(int j=0;j<NUMj;++j)
			if(b[i][j]==c[i][j]){
				cout<<i+1<<" "<<j+1<<" "<<b[i][j]<<endl;
				return 0;	//n+=1;			
			}		
	}
	//if(!n)
		cout<<"not found"<<endl;
	return 0;
}
