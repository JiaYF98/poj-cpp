#include <iostream>
#include <cstdio>
using namespace std;
#define NUMi 5		//��������� 
#define NUMj 5		//��������� 
int a[NUMi][NUMj];
int b[NUMi][NUMj];	//���ڴ�������ֵ 
int c[NUMi][NUMj];	//���ڴ������Сֵ 
int main()
{
	freopen("C:\\Documents and Settings\\Administrator\\����\\test.txt","r",stdin);
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
		b[i][tmp]=a[i][tmp];	//��¼��������ֵ 
	}
	for(int j=0;j<NUMj;++j){
		int min=a[0][j];
		int tmp=0;
		for(int i=0;i<NUMi;++i)
			if(a[i][j]<a[0][j]){
				min=a[i][j];
				tmp=i;
			}
		c[tmp][j]=a[tmp][j];	//��¼�������Сֵ 
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
