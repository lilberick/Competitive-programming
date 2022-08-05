//https://codeforces.com/problemset/problem/1606/A
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;cin>>s;
		cout<<s.substr(0,s.size()-1)+s[0]<<endl;
	}
	return 0;
}
