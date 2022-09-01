//https://codeforces.com/problemset/problem/1722/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		string a,b;
		cin>>n>>a>>b;
		replace(begin(a),end(a),'G','B');
		replace(begin(b),end(b),'G','B');
		cout<<(a==b?"YES":"NO")<<"\n";
	}
	return 0;
}
