//https://codeforces.com/problemset/problem/1722/A
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
		string s,nombre="Timru";
		cin>>n>>s;
		sort(begin(s),end(s));
		cout<<(s==nombre?"YES":"NO")<<"\n";
	}
	return 0;
}
