#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	//freopen("C:\\Documents and Settings\\Administrator\\桌面\\test.txt","r",stdin);//打开测试文件 
	int n;
	scanf("%d",&n);
	int a,b;
	scanf("%d%d",&a,&b);
	double x=(double) b/a;
	for(int i=0;i<n-1;++i){
		int c,d;
		scanf("%d%d",&c,&d);
		double y=(double)d/c;
		if(y-x>0.05)
		printf("better\n");
		else if(x-y>0.05)
		printf("worse\n");
		else
		printf("same\n");
	}
	return 0;
}
