#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int x,y;
	char c;
	while(scanf("%d%d %c",&x,&y,&c)!=EOF){//ʵ���������� ֱ������Ctrl+z�˳� 
		if(!y)
			printf("Divided by zero!\n");
		else{
			switch(c){
				case '+':
					printf("%d\n",x+y);
					break;
				case '-':
					printf("%d\n",x-y);
					break;
				case '*':
					printf("%d\n",x*y);
					break;
				case '/':
					printf("%d\n",x/y);
					break;
				default :
					printf("Invalid operator!\n");
			}
		}
	}
	return 0;
}
