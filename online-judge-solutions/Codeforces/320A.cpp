//https://codeforces.com/problemset/problem/320/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		vector<int> v;
		bool b=true;
		for(int i=0;i<s.size() && b;i++){
			int x=s[i]-'0';
			if((x==1 || x==4) && !(s[0]=='4') && !(s.find("444")<s.size())) v.push_back(x);
			else b=false;
		}
		cout<<(b?"YES":"NO")<<"\n";
	}
	return 0;
}
