#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int M;//�����������ֵ
	int N,X;//����ս������ʼֵ��ӵ������Ԫ�ظ���
	scanf("%d%d%d",&M,&N,&X);
	int m=0;//��������ֵ������ʼ�� 
	for(;X>0;--X){
		m+=N;//ʹ��һ������Ԫ�أ�������������
		if(m<=M){
			m=M;
			N+=M/N;//һ��ս���ں�ս������ֵ 
			m=0;
		}
	}
	printf("%d",N);
	return 0;
}
