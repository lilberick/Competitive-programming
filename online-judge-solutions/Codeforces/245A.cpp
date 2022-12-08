//https://codeforces.com/problemset/problem/245/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,t,x,y,sa=0,sb=0,na=0,nb=0;
	for(cin>>n;n--;){
		cin>>t>>x>>y;
		if(t==1){sa+=x;na++;}
		if(t==2){sb+=x;nb++;}
	}
	cout<<((sa>=(10*na)/2)?"LIVE":"DEAD")<<"\n";
	cout<<((sb>=(10*nb)/2)?"LIVE":"DEAD")<<"\n";
	return 0;
}
