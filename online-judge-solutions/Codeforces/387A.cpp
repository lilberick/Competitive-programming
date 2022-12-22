//https://codeforces.com/problemset/problem/387/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	string s,t;
	while(cin>>s>>t){
		int h1=stoi(s.substr(0,2)),m1=stoi(s.substr(3,2));
		int h2=stoi(t.substr(0,2)),m2=stoi(t.substr(3,2));
		if(m1<m2){m1+=60;h1-=1;}
		if(h1<h2) h1+=24;
		cout<<setw(2)<<setfill('0')<<h1-h2<<":"<<setw(2)<<setfill('0')<<m1-m2<<endl;
	}
	return 0;
}
