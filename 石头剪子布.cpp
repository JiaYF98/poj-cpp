#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s1[20],s2[20];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>s1>>s2;
		if(strcmp(s1,"Rock")==0){
			if(s2[0]=='R')
				cout<<"Tie"<<endl;
			else if(s2[0]=='S')
				cout<<"Player1"<<endl;
			else if(s2[0]=='P')
				cout<<"Player2"<<endl;
		}
		if(strcmp(s1,"Scissors")==0){
			if(s2[0]=='R')
				cout<<"Player2"<<endl;
			else if(s2[0]=='S')
				cout<<"Tie"<<endl;
			else if(s2[0]=='P')
				cout<<"Player1"<<endl;
		}
		if(strcmp(s1,"Paper")==0){
			if(s2[0]=='R')
				cout<<"Player1"<<endl;
			else if(s2[0]=='S')
				cout<<"Player2"<<endl;
			else if(s2[0]=='P')
				cout<<"Tie"<<endl;
		}
		/*
		if(s1=="Paper"){
			if(s2=="Rock")
				cout<<"Player1"<<endl;
			if(s2=="Scissors")
				cout<<"Player2"<<endl;;
			if(s2=="Paper")
				cout<<"Tie"<<endl;
		}
		写成这种形式无法输出 
		*/
	}
	return 0;
}
