#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	for(int n=49;n<342;++n){
		int a=0,x=n;
		while(x){
			int t=x%7;
			a=10*a+t;
			x=x/7;
		} //a��ֵΪ7���Ƶ����ַ�תֵ 
		int b=0,X=a;
		while(X){
			int t=X%10;
			b=10*b+t;
			X=X/10;
		} //b��ֵΪ7����ֵ 
		int c=0,y=n;
		while(y){
			int t=y%9;
			c=10*c+t;
			y=y/7;
		} //c��ֵΪ9���Ƶ����ַ�תֵ 
		int d=0,Y=c;
		while(Y){
			int t=Y%10;
			d=10*d+t;
			Y=Y/10;
		} //d��ֵΪ9����ֵ
		if(a==d){
			printf("%d\n%d\n%d",n,b,d);
		}	
	}
	return 0;
}
