#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,n;
	scanf("%d%d",&a,&n);
	int result=a;
	for(int i=0;i<n-1;++i)
		result*=a;
	printf("%d",result);
	return 0;
}
