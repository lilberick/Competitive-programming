//https://codeforces.com/problemset/problem/202/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	string s;
	while(cin>>s){
			map<char,int> m;
			for(char x:s) m[x]++;
			for(int i=0;i<m.rbegin()->second;i++) cout<<m.rbegin()->first;
			cout<<endl;
	}
	return 0;
}
