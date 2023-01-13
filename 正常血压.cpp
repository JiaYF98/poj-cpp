#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0,max=0;
	for(int i=0;i<n;++i){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){ 
		//这里不能写成90<=a<=140&&60<=b<=90
			sum+=1;
			if(sum>max)
			max=sum;
		}
		else sum=0;
	}
	printf("%d",max);
	return 0;
}
