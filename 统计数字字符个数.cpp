#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char a[256];
int main()
{
	cin.getline(a,sizeof(a));
	int n=0;
	for(int i=0;a[i];++i){
		if(a[i]>='0'&&a[i]<='9')
			++n;
	}
	cout<<n<<endl;
	return 0;
}
