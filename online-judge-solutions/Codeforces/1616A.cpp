//https://codeforces.com/problemset/problem/1616/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<set>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,a;
	for(cin>>t;t--;){
		cin>>n;
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>a;
			s.insert(s.count(a)==1?-a:a);
		}
		cout<<s.size()<<endl;
	}
	return 0;
}
