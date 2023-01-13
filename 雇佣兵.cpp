#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int M;//定义体力最大值
	int N,X;//定义战斗力初始值，拥有能量元素个数
	scanf("%d%d%d",&M,&N,&X);
	int m=0;//定义体力值，并初始化 
	for(;X>0;--X){
		m+=N;//使用一个能量元素，体力增加数量
		if(m<=M){
			m=M;
			N+=M/N;//一个战斗期后战斗力的值 
			m=0;
		}
	}
	printf("%d",N);
	return 0;
}
