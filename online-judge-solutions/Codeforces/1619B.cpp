//https://codeforces.com/problemset/problem/1619/B
//Lang		:	GNU C++14
//Time		:	93 ms
//Memory	:	1300 KB
#include<iostream>
#include<set>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		set<int> s;
		for(int i=1;i*i<=n;i++) s.insert(i*i);
		for(int i=1;i*i*i<=n;i++) s.insert(i*i*i);
		cout<<s.size()<<endl;
	}
	return 0;
}
