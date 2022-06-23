//https://codeforces.com/problemset/problem/1220/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	300 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	string s;
	while(cin>>n>>s){
		int nzero=count(s.begin(),s.end(),'z');
		int nuno=count(s.begin(),s.end(),'n');
		for(int i=0;i<nuno;i++){cout<<1<<" ";}
		for(int i=0;i<nzero;i++){cout<<0<<" ";}
		cout<<endl;
	}
	return 0;
}
