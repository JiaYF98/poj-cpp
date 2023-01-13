#include <iostream>
#include <cstdio>
using namespace std;
int a[110];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>a[i];
	int t1=0,t2=0,t3=0,t4=0;
	for(int i=0;i<n;++i){
		if(a[i]>=0&&a[i]<=18)
			t1+=1;
		else if(a[i]>=19&&a[i]<=35)
			t2+=1;
		else if(a[i]>=36&&a[i]<=60)
			t3+=1;
		else
			t4+=1;
	}
	double p1,p2,p3,p4;
	p1=(double(t1)/n)*100;
	p2=(double(t2)/n)*100;
	p3=(double(t3)/n)*100;
	p4=(double(t4)/n)*100;
	printf("%.2f%\n%.2f%\n%.2f%\n%.2f%\n",p1,p2,p3,p4);
	return 0;
}
