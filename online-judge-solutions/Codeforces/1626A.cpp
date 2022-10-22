//https://codeforces.com/problemset/problem/1626/A
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	for(cin>>t;t--;){
		string s;cin>>s;
		sort(begin(s),end(s));
		cout<<s<<endl;
	}
	return 0;
}
