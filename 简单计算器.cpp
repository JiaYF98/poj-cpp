#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int x,y;
	char c;
	scanf("%d%d %c",&x,&y,&c); 
	/*�м�Ŀո����Ҫ
	����%c��λ���ɿո���棬�����Invalid operator! */
	if(y==0)
	printf("Divided by zero!");
	else{
	switch(c){
		case '+':
		printf("%d",x+y);
		break;
		case '-' :
		printf("%d",x-y);
		break;
		case '*':
		printf("%d",x*y);
		break;
		case '/' :
		printf("%d",x/y);
		break;
		default: 
		printf("Invalid operator!");
		break;
		}
	}

	return 0;
}
