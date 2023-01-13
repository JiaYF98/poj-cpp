#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
struct Student{
	char name[20];
	int grade;
};
void Mysort(Student a[],int n)
{
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[j].grade>a[i].grade||a[j].grade==a[i].grade&&strcmp(a[i].name,a[j].name)>0){
				Student tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
Student stu[30];
int main()
{
	freopen("C:\\Documents and Settings\\Administrator\\×ÀÃæ\\test.txt","r",stdin);
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>stu[i].name>>stu[i].grade;
	Mysort(stu,n);
	for(int i=0;i<n;++i)
		cout<<stu[i].name<<" "<<stu[i].grade<<endl;
	return 0;
}
