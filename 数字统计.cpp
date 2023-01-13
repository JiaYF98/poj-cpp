#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int L,R;
	scanf("%d%d",&L,&R);
	int n=0;
	for(int i=L;i<=R;++i){
		int k=i;
		while(k){
			if(k%10==2)
				n+=1;
			k/=10;
		}
	}
	printf("%d",n);
	return 0;
}
