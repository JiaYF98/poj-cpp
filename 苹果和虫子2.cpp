#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,x,y;
	int result;
	scanf("%d%d%d",&n,&x,&y);
	if(y%x==0)
	result=n-y/x;
	else
	result=n-y/x-1;
	printf("%d",result);
	return 0;
}
