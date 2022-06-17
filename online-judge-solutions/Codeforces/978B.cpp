//https://codeforces.com/problemset/problem/978/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<regex>
using namespace std;
int main(){
	int n;
	string s;
	while(cin>>n>>s){
		int nx=s.find("xxx");
		while(nx>=0){
			nx=s.find("xxx");
			s=regex_replace(s,regex("xxx"),"xx");
		}
		cout<<n-s.size()<<endl;
	}
	return 0;
}
