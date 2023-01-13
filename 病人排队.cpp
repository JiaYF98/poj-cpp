#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
struct patient{
	char ID[10];
	int age;
}patients[100];
void Select_Sort(patient patients[],int n)
{
	for(int i=0;i<n;++i)
		if(patients[i].age<60)
			patients[i].age=-1;
	for(int i=n-1;i>=0;--i)
		for(int j=0;j<i;++j)
			if(patients[j].age<patients[j+1].age||
				patients[j].age==patients[j+1].age&&
				strcmp(patients[j].ID,patients[j].ID)>0){
					patient tmp=patients[j+1];
					patients[j+1]=patients[j];
					patients[j]=tmp;
				}
}
int main()
{
	freopen("C:\\Documents and Settings\\Administrator\\×ÀÃæ\\test.txt","r",stdin);
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>patients[i].ID>>patients[i].age;
	Select_Sort(patients,n);
	for(int i=0;i<n;++i)
		cout<<patients[i].ID<<endl;
	return 0;
}
