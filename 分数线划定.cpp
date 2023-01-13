#include <iostream>
#include <cstdio>
using namespace std;
struct Volunteer{
	int k;	//报名号 
	int s;	// 笔试成绩 
}volunteers[5010];
void MySort(Volunteer volunteers[],int n)	//从大到小排列 
{
	for(int i=n-1;i>=0;--i){
		for(int j=0;j<i;++j){
			if(volunteers[j].s<volunteers[j+1].s||
				volunteers[j].s==volunteers[j+1].s&&
				volunteers[j].k>volunteers[j+1].k){
					Volunteer tmp=volunteers[j+1];
					volunteers[j+1]=volunteers[j];
					volunteers[j]=tmp;
				}
		}
	}
}
void select(Volunteer volunteers[],int t)	//筛选出不满足分数线的成绩 
{
	int k=t;	//此处计数一定要引入新的变量 
	for(int i=t+1;volunteers[i].s;++i)
		if(volunteers[i].s<volunteers[t].s){
			++k;	//不能++t; 
			volunteers[i].s=-1;
		}
	cout<<volunteers[t].s<<" "<<k<<endl;
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i)
		cin>>volunteers[i].k>>volunteers[i].s;
	MySort(volunteers,n);
	int t=m*1.5;
	select(volunteers,t);
	for(int i=0;volunteers[i].s>0;++i)
		cout<<volunteers[i].k<<" "<<volunteers[i].s<<endl;
	return 0;
}
