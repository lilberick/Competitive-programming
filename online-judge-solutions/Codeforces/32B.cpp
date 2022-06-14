//https://codeforces.com/problemset/problem/32/B
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		while(s.size()!=0){
			if(s[0]=='.'){cout<<0;}
			else{
				s[1]=='.'?cout<<1:cout<<2;
				s.erase(s.begin());
			}
			s.erase(s.begin());
		}cout<<endl;
	}
	return 0;
}
